#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "enter the id of employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << " the id of employee: " << id << endl;
    }
};

int main()
{
    // Employee harry, aarya, rashi;
    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}