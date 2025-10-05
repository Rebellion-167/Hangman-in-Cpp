#ifndef PRINT_LETTERS_H
#define PRINT_LETTERS_H
#include "print_header.h"
using namespace std;

// Printing the letters in alphabetical order
// First row - A to M
// Second row - N to Z
void printLetters(string input, char from, char to) {
    string s;
    for(char i = from; i <= to; i++) {
        if(input.find(i) == string::npos) {
            s += i;
            s += ' ';
        } else {
            s += "  ";
        }
    }
    printMessage(s, false, false);
}

// Printing the available letters in two rows
void printAvailableLetters(string taken) {
    printMessage("Available Letters");
    printLetters(taken, 'A', 'M');
    printLetters(taken, 'N', 'Z');
}
#endif