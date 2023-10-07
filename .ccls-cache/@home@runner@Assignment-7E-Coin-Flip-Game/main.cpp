// Begin File for Coin Flip Game, Random Heads or Tails Betting Game

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Method Prototypes
char getDecision();//these return chars
char getGuess();
char flipCoin();
void winOrLose(char g, char c, float & b);

int main()
{
    float bank = 15.00;
    char decision, guess, coin;
    

   // display the 3 lines of messages to user (or create another function for these cout statements)
    
    // call get decision
    
    // use a while loop and continue while the decision is y and the bank balance is >0
    // the body of the while loop consist of 4 function calls....
   	 // call getGuess
    	// call flipCoin
    	// call winOrLose
    // call getDecision
    
    // after the while loop, display the thank you message with the bank balance
    
    
    return 0;
}

char getDecision()
{
    // the purpose of this function is to ask if the player wishes to play again
    // and return a y or n

}

char getGuess()
{
    
    // the purpose of getGuess is to prompt the user to input h or t
    // and return the result
    
}

char flipCoin()
{
    // the purpose of flipCoin is to generate a random number 1 or 2
    // if it's 1, display "the coin landed on heads" and return h
    // if its a 2, display "the coin landed on tails" and return t
    
    
}

void winOrLose(char guess, char coin, float & bank)
{
    // the purpose of this function is to determine if the player wins or loses
    // and adjust the bank accordingly
    
   
    
    
}