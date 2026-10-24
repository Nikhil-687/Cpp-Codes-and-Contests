#include <chrono>
#include <atomic>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <thread>

using namespace std;
using namespace chrono;

namespace {

void clearScreen() {
	cout << "\033[2J\033[H";
}

string formatDuration(long long totalSeconds) {
	const long long hours = totalSeconds / 3600;
	const long long minutes = (totalSeconds % 3600) / 60;
	const long long seconds = totalSeconds % 60;

	ostringstream output;
	output << setfill('0') << setw(2) << hours << ':'
		   << setw(2) << minutes << ':' << setw(2) << seconds;
	return output.str();
}

void waitForEnter() {
	cout << "\nPress Enter to return to the menu...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}

void countdown() {
	int minutes;
	int durationSeconds;

	cout << "\nCountdown duration\nMinutes: ";
	cin >> minutes;
	cout << "Seconds: ";
	cin >> durationSeconds;

	if (!cin || minutes < 0 || durationSeconds < 0 || durationSeconds > 59 ||
		(minutes == 0 && durationSeconds == 0)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nPlease enter a valid duration.\n";
		waitForEnter();
		return;
	}

	long long remaining = static_cast<long long>(minutes) * 60 + durationSeconds;
	while (remaining > 0) {
		clearScreen();
		cout << "\n              COUNTDOWN\n\n"
			 << "                 " << formatDuration(remaining) << "\n";
		this_thread::sleep_for(seconds(1));
		--remaining;
	}

	clearScreen();
	cout << "\n              TIME'S UP!\n\n"
		 << "                 00:00:00\n"
		 << "\a";
	waitForEnter();
}

void stopwatch() {
	cout << "\nStopwatch started. Press Enter to stop.\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	const auto started = steady_clock::now();
	atomic<bool> stopped{false};
	thread display([&] {
		while (!stopped.load()) {
			const auto elapsed = duration_cast<seconds>(steady_clock::now() - started).count();
			cout << "\rElapsed: " << formatDuration(elapsed) << flush;
			this_thread::sleep_for(milliseconds(250));
		}
	});

	string ignored;
	getline(cin, ignored);
	stopped.store(true);
	const auto elapsed = duration_cast<seconds>(steady_clock::now() - started).count();
	display.join();
	cout << "\rElapsed: " << formatDuration(elapsed) << "\n";
	waitForEnter();
}

} // namespace

int main() {
	while (true) {
		clearScreen();
		cout << "\n========================================\n"
			 << "          CHRONO // TERMINAL TIME\n"
			 << "========================================\n\n"
			 << "  [1] Countdown\n"
			 << "  [2] Stopwatch\n"
			 << "  [q] Quit\n\n"
			 << "Choose a mode: ";

		char choice;
		cin >> choice;
		if (!cin || choice == 'q' || choice == 'Q') {
			cout << "\nGoodbye.\n";
			return 0;
		}

		if (choice == '1') {
			countdown();
		} else if (choice == '2') {
			stopwatch();
		} else {
			cout << "\nUnknown mode.\n";
			waitForEnter();
		}
	}
}