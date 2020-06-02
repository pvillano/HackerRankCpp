//
// Created by Peter Villano on 6/2/20.
//

#include "ctci_ransom_note.h"
#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

bool boolCheckMagazine(vector<string> magazine, vector<string> note) {
    map<string, int> magazine_counts;
    map<string, int> note_counts;

    for(const string& word : magazine){
        magazine_counts[word] += 1;
    }
    for(const string& word : note){
        note_counts[word] += 1;
    }

    for(const auto& element : note_counts){
        string word = element.first;
        int count = element.second;
        if(count > magazine_counts[word]){
            return false;
        }
    }
    return true;
}

void checkMagazine(vector<string> magazine, vector<string> note){
    if(boolCheckMagazine(magazine, note)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
