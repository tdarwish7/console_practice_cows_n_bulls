//
//  BullAndCowGame.hpp
//  Section01
//
//  Created by Tariq Darwish on 1/12/17.
//  Copyright © 2017 Tariq Darwish. All rights reserved.
//

#ifndef BullAndCowGame_hpp
#define BullAndCowGame_hpp

#include <stdio.h>
#include <string>

class BullAndCowGame {
    
public:
    void Reset();
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValid(std::string);
    
    
private:
    int MyCurrentTry;
    int MyMaxTries;

};


#endif /* BullAndCowGame_hpp */
