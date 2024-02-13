#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    cout << "Here is the game of guessing a number\n";
    int secretNumber = rand() % 20+1;
    cout << "I have guessed the number between 1 and 20\n";
    int guess, guess_taken;
    for (guess_taken = 0; guess_taken < 7; guess_taken++)
    {
        cout << "Take a guess\n";
        cin >> guess;
        if (guess < secretNumber)
        {
            cout << "Your guess is low\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Your guess is high\n";
        }
        else
        {
            break;
        }
    }
    if (guess == secretNumber)
    {
        cout << "You guessed the secret number in " << guess_taken << endl;
    }
    else
    {
        cout << "I thought you would be successful in guessing the secret number its ok,the secret number is " << secretNumber<< endl;
    }

    return 0;
}