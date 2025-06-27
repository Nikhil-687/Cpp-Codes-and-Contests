// #include <asio.hpp>
// #include <iostream>
// #include <optional>
// int main() {
    // std::optional<int> x = 5;
    // std::cout << "The value of x is: ";
    // if (x) {
    //     std::cout << *x << std::endl;
    // } else {
    //     std::cout << "No value" << std::endl;
    // }
    // hi.cpp

    // return 0;
// }

#include <iostream>
#include <asio.hpp> 

int main() {
    asio::io_context io;

    asio::steady_timer timer(io, std::chrono::seconds(5));
    std::cout << "Waiting 5 seconds...\n";

    timer.wait(); 
    std::cout << "Done waiting!\n";

    return 0;
}