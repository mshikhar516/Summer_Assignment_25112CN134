#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact contacts[100];
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nContact " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, contacts[i].name);

        cout << "Phone Number: ";
        getline(cin, contacts[i].phone);
    }

    cout << "\n===== Contact List =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
    }

    return 0;
}