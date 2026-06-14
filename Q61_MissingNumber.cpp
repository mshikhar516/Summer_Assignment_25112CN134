#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements:\n";
    for(int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for(int i = 0; i < n - 1; i++)
        actualSum += arr[i];

    cout << "Missing Number = " << expectedSum - actualSum;

    return 0;
}