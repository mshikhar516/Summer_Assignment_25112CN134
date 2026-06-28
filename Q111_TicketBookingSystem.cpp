#include <iostream>
using namespace std;

int main()
{
    string name;
    int tickets;
    const int ticketPrice = 500;

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    int total = tickets * ticketPrice;

    cout << "\n===== BOOKING DETAILS =====\n";
    cout << "Customer Name : " << name << endl;
    cout << "Tickets       : " << tickets << endl;
    cout << "Ticket Price  : " << ticketPrice << endl;
    cout << "Total Amount  : " << total << endl;

    return 0;
}