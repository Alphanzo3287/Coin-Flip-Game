//Alphanzo Moore
//CIS-5 Online
//October 7, 2023
//Assignment 7E: Coin Flip Game

// Begin File for Coin Flip Game, Random Heads or Tails Betting Game

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Method Prototypes
char getDecision();
char getGuess();
char flipCoin();
void winOrLose(char g, char c, float &b);

int main()
{
    float bank = 15.00;
    char decision, guess, coin;

    cout << "Welcome to the Coin Flip Game!" << endl;
    cout << "You start with a bank of $" << bank << endl;

    decision = getDecision();

    while (decision == 'y' && bank > 0.0)
    {
        guess = getGuess();
        coin = flipCoin();
        winOrLose(guess, coin, bank);
        cout << "Current bank balance: $" << fixed << setprecision(2) << bank << endl;
        decision = getDecision();
    }

    cout << "Thank you for playing! Your final bank balance is: $" << fixed << setprecision(2) << bank << endl;

    return 0;
}

char getDecision()
{
    char decision;
    cout << "Do you want to play again? (y/n): ";
    cin >> decision;
    return decision;
}

char getGuess()
{
    char guess;
    cout << "Guess (h for heads, t for tails): ";
    cin >> guess;
    return guess;
}

char flipCoin()
{
    srand(time(0));
    int result = rand() % 2 + 1;
    if (result == 1)
    {
        cout << "The coin landed on heads!" << endl;
        return 'h';
    }
    else
    {
        cout << "The coin landed on tails!" << endl;
        return 't';
    }
}

void winOrLose(char guess, char coin, float &bank)
{
    if (guess == coin)
    {
        cout << "You win! Your bet is doubled." << endl;
        bank *= 2;
    }
    else
    {
        cout << "You lose. You lost your bet." << endl;
        bank -= 1.0;
    }
}
