//
// Created by Peter Villano on 6/14/20.
//

#include "ctci_making_anagrams.h"


int makeAnagram(string a, string b){
    int counts[26] = {0};
    for(char c : a){
        ++counts[c-'a'];
    }

    for(char c : b){
        --counts[c-'a'];
    }
    int total = 0;
    for(int i : counts){
        total += abs(i);
    }
    return total;
}