# Lesson plan
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

char getDecision();
char getGuess();
char flipCoin();
void winOrLose(char g, char c, float &b);

int main()
{
    float bank = 15.00;
    char decision, guess, coin;

    cout << "Welcome to the Coin Flip Game!" << endl;
    cout << "You start with a bank of $15.00." << endl;

    do
    {
        cout << "Bank: $" << fixed << setprecision(2) << bank << endl;
        decision = getDecision();

        while (decision == 'y' && bank > 0)
        {
            guess = getGuess();
            coin = flipCoin();
            winOrLose(guess, coin, bank);
            decision = getDecision();
        }

    } while (decision == 'y' && bank > 0);

    cout << "Thank you for playing! Your final bank balance is $" << fixed << setprecision(2) << bank << endl;
    return 0;
}

char getDecision()
{
    char decision;
    cout << "Do you wish to play again? (y/n): ";
    cin >> decision;
    return decision;
}

char getGuess()
{
    char guess;
    cout << "Guess heads (h) or tails (t): ";
    cin >> guess;
    return guess;
}

char flipCoin()
{
    int random = rand() % 2 + 1;
    if (random == 1)
    {
        cout << "The coin landed on heads." << endl;
        return 'h';
    }
    else
    {
        cout << "The coin landed on tails." << endl;
        return 't';
    }
}

void winOrLose(char guess, char coin, float &bank)
{
    if (guess == coin)
    {
        cout << "You win!" << endl;
        bank += 1.00;
    }
    else
    {
        cout << "You lose!" << endl;
        bank -= 1.00;
    }
}