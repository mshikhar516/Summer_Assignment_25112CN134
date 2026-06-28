#include <iostream>
using namespace std;

struct Book
{
    int bookID;
    string title;
    string author;
};

int main()
{
    Book books[100];
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> books[i].bookID;
        cin.ignore();

        cout << "Title: ";
        getline(cin, books[i].title);

        cout << "Author: ";
        getline(cin, books[i].author);
    }

    cout << "\n===== Library Records =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << books[i].bookID << endl;
        cout << "Title   : " << books[i].title << endl;
        cout << "Author  : " << books[i].author << endl;
    }

    return 0;
}