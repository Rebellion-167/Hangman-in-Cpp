# Hangman Game

This is the simple console-based implementation of the classic word-guessing game, **Hangman**, written in C++.

## Features

* **Random Word Selection:** A word is randomly selected from a local `words.txt` file for each game.
* **Visual Hangman:** The hangman figure is drawn in the console , progressing with each incorrect guess.
* **Available Letters:** Displays the letters that have not yet been guessed.
* **Guess Tracking:** Tracks correct and incorrect guesses and manages the number of remaining tries.
* **Clear Interface:** Uses `system("cls")` to refresh the screen for a clean, updated game state display.

## External Functions

The game logic is modularized across several header files, allowing for clean seperation of responsibilities:

* `print_header.h` : Contains function to display general messages and headings.
* `draw_hangman.h` : Handles the visual output of the hangman figure based on the number of incorrect tries.
* `print_letters.h` : Manages and displays the letters that have already been guessed by the player.
* `check_win.h` : Contains the logic for displaying the current state of the word and determining if the player has won.
* `random_word.h` : Used for seeding the random generator and loading a word randomly from `words.txt`.
* `tries_left.h` : Calculates and returns the current count of incorrect guesses.
