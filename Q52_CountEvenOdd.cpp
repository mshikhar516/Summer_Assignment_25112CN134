#include <iostream>
using namespace std;

int main()
{
    int n;
    int evenCount = 0, oddCount = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even Elements = " << evenCount << endl;
    cout << "Odd Elements = " << oddCount;

    return 0;
}