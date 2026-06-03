#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    num1 = a;
    num2 = b;

    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (num1 * num2) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}