#include <iostream>
using namespace std;

int main()
{
    int n, key, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}