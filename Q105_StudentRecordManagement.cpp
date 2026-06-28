#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll No: ";
        cin >> s[i].rollNo;

        cin.ignore();

        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No : " << s[i].rollNo << endl;
        cout << "Name    : " << s[i].name << endl;
        cout << "Marks   : " << s[i].marks << endl;
    }

    return 0;
}