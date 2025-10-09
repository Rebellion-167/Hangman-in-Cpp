#ifndef TRIES_LEFT_H
#define TRIES_LEFT_H
using namespace std;
#include <string>

// Function to check how many tries are left
int triesLeft(string word, string guessed) {
    int error = 0;
    for(int i = 0; i < guessed.length(); i++) {
        if(word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}
#endif