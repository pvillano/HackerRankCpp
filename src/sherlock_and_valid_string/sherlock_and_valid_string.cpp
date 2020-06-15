//
// Created by Peter Villano on 6/14/20.
//

#include "sherlock_and_valid_string.h"

string isValid(const string& s) {
    int count_map[26] = {0};
    unordered_map<int, int> count_counts;

    for (char c: s) {
        ++count_map[c - 'a'];
    }

    for (int count : count_map) {
        if(count > 0){
            ++count_counts[count];
        }
    }
    if(count_counts.size() < 2){
        return "YES";
    } else if ( count_counts.size() > 2) {
        return "NO";
    } else {
        // if there is one character which occurs once
        if(count_counts.count(1) and count_counts[1] == 1){
            return "YES";
        }
        pair<int, int> left = *count_counts.begin();
        pair<int, int> right = *(++count_counts.begin());

        if(left.first > right.first) {
            swap(left, right);
        }

        // if there is one character which occurs one more time than the rest
        if(right.first == left.first + 1 and right.second == 1){
            return "YES";
        }
    }
    return "NO";
}