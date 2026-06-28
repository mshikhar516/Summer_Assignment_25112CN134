#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int freq1[256] = {0};
    int freq2[256] = {0};

    int len1 = 0, len2 = 0;

    while(str1[len1] != '\0')
    {
        freq1[(unsigned char)str1[len1]]++;
        len1++;
    }

    while(str2[len2] != '\0')
    {
        freq2[(unsigned char)str2[len2]]++;
        len2++;
    }

    if(len1 != len2)
    {
        cout << "Not Anagrams";
        return 0;
    }

    bool anagram = true;

    for(int i = 0; i < 256; i++)
    {
        if(freq1[i] != freq2[i])
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}