#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    bool printed[256] = {false};

    cout << "Common Characters: ";

    for(int i = 0; str1[i] != '\0'; i++)
    {
        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j] && !printed[(unsigned char)str1[i]])
            {
                cout << str1[i] << " ";
                printed[(unsigned char)str1[i]] = true;
            }
        }
    }

    return 0;
}