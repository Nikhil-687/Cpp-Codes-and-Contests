#include <iostream>
using namespace std;
int main()
{
    int bSalary, percentageA, percentageD;
    cout << "ENTER VALUEs OF bSalary, percentageA & percentageD: ";
    cin >> bSalary >> percentageA >> percentageD;
    int netSalary=bSalary+bSalary*percentageA/100-bSalary*percentageD/100;
    cout << "NET SALARY IS: " << netSalary << endl;
    return 0;
}