#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    cout << "Armstrong Numbers: ";

    for(int num = start; num <= end; num++)
    {
        int temp = num;
        int sum = 0;

        while(temp > 0)
        {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if(sum == num)
            cout << num << " ";
    }

    return 0;
}