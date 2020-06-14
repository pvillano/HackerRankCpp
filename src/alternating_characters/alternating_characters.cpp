//
// Created by Peter Villano on 6/14/20.
//

#include "alternating_characters.h"


int alternatingCharacters(string s){
    int count = 0;
    for (int i = 1; i < s.size(); ++i) {
        if(s[i-1]==s[i]){
            ++count;
        }
    }
    return count;
}