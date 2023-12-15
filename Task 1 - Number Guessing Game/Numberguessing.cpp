#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    // Variables to store user input and track the number of guesses
    int guess, attempts = 0;

    cout << "Welcome to the Guess the Number game!\n";
    cout << "Try to guess the number between 1 and 100.\n";

    do
    {
        // Ask the user for a guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment the number of attempts
        attempts++;

        // Provide feedback on the guess
        if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
