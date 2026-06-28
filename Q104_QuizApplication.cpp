#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    cout << "===== C++ Quiz =====\n\n";

    cout << "Q1. C++ was developed by?\n";
    cout << "A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\nD. Guido van Rossum\n";
    cin >> answer;
    if(answer == 'B' || answer == 'b')
        score++;

    cout << "\nQ2. Which symbol is used for comments?\n";
    cout << "A. //\nB. ##\nC. <!-- -->\nD. **\n";
    cin >> answer;
    if(answer == 'A' || answer == 'a')
        score++;

    cout << "\nQ3. Which loop executes at least once?\n";
    cout << "A. for\nB. while\nC. do-while\nD. None\n";
    cin >> answer;
    if(answer == 'C' || answer == 'c')
        score++;

    cout << "\nQ4. Which operator is used for equality?\n";
    cout << "A. =\nB. ==\nC. !=\nD. <=\n";
    cin >> answer;
    if(answer == 'B' || answer == 'b')
        score++;

    cout << "\nQ5. Which header file is used for input/output?\n";
    cout << "A. stdio.h\nB. string\nC. iostream\nD. math.h\n";
    cin >> answer;
    if(answer == 'C' || answer == 'c')
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Your Score = " << score << "/5\n";

    if(score == 5)
        cout << "Excellent!";
    else if(score >= 3)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}