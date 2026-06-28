#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(unsigned char)str[i]] > maxFreq)
        {
            maxFreq = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum Occurring Character = " << maxChar << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}