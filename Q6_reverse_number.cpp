#include <iostream>
using namespace std;

int main()
{
    int num, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number = " << reverse;

    return 0;
}