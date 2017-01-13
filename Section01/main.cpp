//
//  main.cpp
//  Section01
//
//  Created by Tariq Darwish on 1/12/17.
//  Copyright © 2017 Tariq Darwish. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void PrintGreeting();
void PlayGame();
string GetGuess();

int main(int argc, const char * argv[]) {
    
    
    PrintGreeting();
    PlayGame();
    
    return 0;
}

void PrintGreeting() {
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
    return;
}

void PlayGame() {
    constexpr int NUMBER_OF_GUESSES = 5;
    for(int i = 0; i <= NUMBER_OF_GUESSES; i++) {
        string Guess = GetGuess();
        cout << "\nYour guess was " << Guess << endl;
    }
    return;
}

string GetGuess() {
    string Guess = "";
    cout << "\nEnter your guess: ";
    getline(cin, Guess);
    return Guess;
}

