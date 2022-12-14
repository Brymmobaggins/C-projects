// Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too low, or right. Once the player guesses the number, the game is over

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int randomNum, guess, tries = 0;
    srand(time(0)); // seed random number generatorl
    randomNum = rand() % 100 + 1; // genrate random number between 1 and 100
    cout
        << "Number Guessing Game \n\n";

    do
    {     
        cout << " Enter a Number Guess: ";
        cin >> guess;
        tries++;

        if (guess > randomNum)
            cout << " Guess is too high!\n\n";
        else if (guess < randomNum)
            cout << " Guess is too low!\n\n";
        else
            cout << "\n Correct! you got it in " << tries<< "guesses!\n";

    } while (guess != randomNum);

    return 0;
}
