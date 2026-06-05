#include <iostream>
using namespace std;

int main()
{
    int num, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0)
    {
        digit = num % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}