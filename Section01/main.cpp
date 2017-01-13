//
//  main.cpp
//  Section01
//
//  Created by Tariq Darwish on 1/12/17.
//  Copyright © 2017 Tariq Darwish. All rights reserved.
//

#include <iostream>
#include <string>
#include "BullAndCowGame.hpp"

void PrintGreeting();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

int main(int argc, const char * argv[]) {
    
    
    PrintGreeting();
    PlayGame();
    AskToPlayAgain();
    
    return 0;
}

void PrintGreeting() {
    constexpr int WORD_LENGTH = 9;
    std::cout << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
    return;
}

void PlayGame() {
    BullAndCowGame BCGame;
    constexpr int NUMBER_OF_GUESSES = 5;
    for(int i = 0; i <= NUMBER_OF_GUESSES; i++) {
        std::string Guess = GetGuess();
        std::cout << "\nYour guess was " << Guess << std::endl;
    }
    return;
}

std::string GetGuess() {
    std::string Guess = "";
    std::cout << "\nEnter your guess: ";
    getline(std::cin, Guess);
    return Guess;
}

bool AskToPlayAgain() {
    
    std::string Response;
    std::cout << "Would you like to play again? (y/n)" << std::endl;
    getline(std::cin,Response);
    
    return (Response[0] == 'y') || (Response[0] == 'Y' );
}

