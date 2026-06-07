#include <iostream>
using namespace std;

int reverseNum = 0;

void reverse(int num)
{
    if(num == 0)
        return;

    reverseNum = reverseNum * 10 + (num % 10);
    reverse(num / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    reverse(num);

    cout << "Reversed Number = " << reverseNum;

    return 0;
}