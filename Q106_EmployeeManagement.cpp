#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].id;

        cin.ignore();

        cout << "Name: ";
        getline(cin, emp[i].name);

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n----- Employee Details -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID     : " << emp[i].id << endl;
        cout << "Name   : " << emp[i].name << endl;
        cout << "Salary : " << emp[i].salary << endl;
    }

    return 0;
}