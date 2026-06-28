#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 57;
    int guess;
    int attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "Guess the number between 1 and 100.\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > secretNumber)
            cout << "Too High!\n";
        else if(guess < secretNumber)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! You guessed correctly.\n";

    } while(guess != secretNumber);

    cout << "Total Attempts = " << attempts;

    return 0;
}