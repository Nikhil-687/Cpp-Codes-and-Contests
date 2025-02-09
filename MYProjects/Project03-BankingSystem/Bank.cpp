#include <bits/stdc++.h>

class Account
{
private:
public:
    char name[50];
    int age;
    int accNo;
    friend std::ifstream & operator>>(std::ifstream &get_it, Account &a);
};

std::ifstream & operator>>(std::ifstream &get_it, Account &a)
{
    get_it >> a.name;
    get_it >> a.age;
    get_it >> a.accNo;
    return get_it;
}

void get_info(std::vector<Account> *a)
{
}

int main()
{
    std::vector<Account> database;
    get_info(&database);
    return 0;
}