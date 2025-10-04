#ifndef PRINT_HEADER_H
#define PRINT_HEADER_H
#include <iostream>
using namespace std;

// Printing header messages
void printMessage(string message, bool printTop = true, bool printBottom = true) {
    if(printTop) {
        // Printing top bar
        cout << "+---------------------------------+" << endl;
        // Printing side wall
        cout << "|";
    } else {
        // Just printing the side wall
        cout << "|";
    }

    // Centering the message with spaces
    bool front = true;
    for(int i = message.length(); i < 33; i++) {
        if(front) {
            // Adding spaces at the front
            message = " " + message;
        } else {
            // Adding spaces at the back
            message = message + " ";
        }
        front = !front;
    }

    // Printing the message finally
    cout << message;

    if(printBottom) {
        //Printing the side wall
        cout << "|" << endl;
        //Printing the bottom bar
        cout << "+---------------------------------+" << endl;
    } else {
        //Just printing the side wall
        cout << "|" << endl;
    }
}

#endif