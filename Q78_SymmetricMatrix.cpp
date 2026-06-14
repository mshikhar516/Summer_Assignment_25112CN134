#include <iostream>
using namespace std;

int main()
{
    int n;
    bool symmetric = true;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Symmetric Matrix";
    else
        cout << "Not a Symmetric Matrix";

    return 0;
}