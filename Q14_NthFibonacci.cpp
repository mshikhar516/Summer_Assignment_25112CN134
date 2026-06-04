#include <iostream>
using namespace std;

int main()
{
    int n;
    int first = 0, second = 1, next;

    cout << "Enter n: ";
    cin >> n;

    if(n == 0)
    {
        cout << "Nth Fibonacci Term = 0";
        return 0;
    }

    for(int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    cout << "Nth Fibonacci Term = " << second;

    return 0;
}