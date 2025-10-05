#include <iostream>
#include "print_header.h"
#include "draw_hangman.h"
#include "print_letters.h"
#include "check_win.h"
using namespace std;

int main() {
    string guesses;
    printMessage("HANGMAN");
    drawHangman(9);
    printAvailableLetters("ALEX");
    printMessage("Guess the word");
    printWordAndCheckWin("ALEXES", "ALEX");
    return 0;
}