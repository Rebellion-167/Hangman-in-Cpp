#include <iostream>
#include <time.h>
#include "print_header.h"
#include "draw_hangman.h"
#include "print_letters.h"
#include "check_win.h"
#include "random_word.h"
#include "tries_left.h"

using namespace std;

int main() {
    //Seeding the random generator
    srand(time(0));
    string guesses;
    string wordToGuess;
    wordToGuess = loadRandomWord("words.txt");
    cout << wordToGuess << endl << endl;
    int tries = 0;
    bool win = false;
    do {
        system("cls"); // to clear the screen every call
        printMessage("HANGMAN");
        drawHangman(tries);
        printAvailableLetters(guesses);
        printMessage("Guess the word");
        win = printWordAndCheckWin(wordToGuess, guesses);

        // If won, getting out of loop
        if(win) break;

        // Accepting character from user
        char x;
        cout << ">"; cin >> x;

        if(guesses.find(x) == string::npos)
            guesses += x;

        tries = triesLeft(wordToGuess, guesses);
    }while(tries < 10);

    if (win) 
        printMessage("You Won!");
    else
        printMessage("Game Over");

    system("pause");
    return 0;
}