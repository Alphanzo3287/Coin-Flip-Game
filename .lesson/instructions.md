# Instructions  
Write a program that starts a player off with a bank of $15.00. A coin is flipped and randomly lands on heads or tails. The user will guess heads or tails. If the coin flip matches the player's guess his bet will be doubled. It costs 1 dollar to play and the program will bet that amount automatically each time as long as there is the available bank amount. 

You should be using plenty of functions, random numbers, decision statements, loops, variables, and i/o manipulation at a minimum.

At the end of the game, ask the user if she wishes to play again and loop the game. Keep looping until the bank reaches 0.00 or the user inputs "n" to quit playing.

*** NOTE *** I added a BEGIN file as an attachment to get you started. This is just one possible design. Many others exist. Feel free to complete this design or modify it to make it your own.

Here's what will earn point deductions:

Too few functions (This should have at least 3). Don't be afraid to use functions to help modularize the parts to this game.
Global variables
Too many win case evaluations. There should only be if you win or lose. Do not use a brute force method and check every permutation. This is not a smart approach. Think, how do you win? You win if your guess is == to the coin flip. I'll say no more.
Syntax errors
Improper logic or improper function arguments/return type
Duplication of code. If you're writing the same thing twice, put it in a function.
Round peg, square hole. i.e Don't use a for loop and try and convert it to a while loop. Use the right tool for the job. 