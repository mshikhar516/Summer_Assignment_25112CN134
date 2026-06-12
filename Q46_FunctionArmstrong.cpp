#include <iostream>
using namespace std;

bool isArmstrong(int num)
{
    int original = num;
    int sum = 0;

    while(num > 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == original;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}
