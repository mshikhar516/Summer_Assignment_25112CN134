#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reverse = 0;

    while(num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isPalindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}