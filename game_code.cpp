#include <iostream>
#include "print_header.h"
#include "draw_hangman.h"
using namespace std;

int main() {
    printMessage("HANGMAN");
    drawHangman(5);
    return 0;
}