#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while(num)
    {
        count += (num & 1);
        num >>= 1;
    }

    cout << "Set Bits = " << count;

    return 0;
}
