#ifndef CHECK_WIN_H
#define CHECK_WIN_H
#include "print_header.h"
using namespace std;

// Function to print the guessed word and to check 
// if the user has won
bool printWordAndCheckWin(string word, string guessed) {
    bool won = true;
    string s;

    for(int i = 0; i < word.length(); i++) {
        if(guessed.find(word[i]) == string::npos) {
            // If the letter we guessed is not there
            // in the word we have to guess
            won = false;
            s += "_ ";
        } else {
            s += word[i];
            s += ' ';
        }
    }
    printMessage(s, false);
    return won;
}
#endif