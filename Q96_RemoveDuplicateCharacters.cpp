#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    bool visited[256] = {false};

    cout << "String after removing duplicates: ";

    for(int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];

        if(!visited[ch])
        {
            cout << str[i];
            visited[ch] = true;
        }
    }

    return 0;
}