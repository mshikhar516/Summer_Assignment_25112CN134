#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    int marks[5];
    int total = 0;
    float percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = total / 5.0;

    cout << "\n------ MARKSHEET ------\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollNo << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade : A+";
    else if(percentage >= 80)
        cout << "Grade : A";
    else if(percentage >= 70)
        cout << "Grade : B";
    else if(percentage >= 60)
        cout << "Grade : C";
    else
        cout << "Grade : Fail";

    return 0;
}