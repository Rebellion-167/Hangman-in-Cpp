#ifndef DRAW_HANGMAN_H
#define DRAW_HANGMAN_H
#include "print_header.h"
#include <iostream>
using namespace std;

// Function to draw the hangman using the guess counts
void drawHangman(int guessCount) {
    if(guessCount >= 1)
        printMessage("|", false, false);
    else
        printMessage("", false, false);

    if(guessCount >= 2)
        printMessage("|", false, false);
    else
        printMessage("", false, false);
    
    if(guessCount >= 3)
        printMessage("O", false, false);
    else
        printMessage("", false, false);

    if(guessCount == 4)
        printMessage("/  ", false, false);

    if(guessCount == 5)
        printMessage("/| ", false, false);

    if(guessCount >= 6)
        printMessage("/|\\", false, false);
    else
        printMessage("", false, false);
    
    if(guessCount >= 7)
        printMessage("|", false, false);
    else
        printMessage("", false, false);

    if(guessCount == 8)
        printMessage("/ ", false, false);
    
    if(guessCount >= 9)
        printMessage("/ \\", false, false);
    else
        printMessage("", false, false);

    //Printing the stage
    printMessage("+----------+", false, false);
    printMessage("|          |", false, false);
}
#endif