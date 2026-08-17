#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100: ";

    do
    {
        cin >> guess;

        if (guess > number)
        {
            cout << "Too high! Try again: ";
        }
        else if (guess < number)
        {
            cout << "Too low! Try again: ";
        }
        else
        {
            cout << "Correct! You guessed the number.";
        }

    } while (guess != number);

    return 0;
}