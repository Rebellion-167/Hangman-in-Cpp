#ifndef RANDOM_WORD_H
#define RANDOM_WORD_H
using namespace std;
#include <vector>
#include <string>
#include <fstream>

// Function that returs a random word
// from a text file
string loadRandomWord(string path) {
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path);
    if(reader.is_open()) {
        while(getline(reader, word)) {
            v.push_back(word);
        }

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        reader.close();
    }
    return word;
}

#endif