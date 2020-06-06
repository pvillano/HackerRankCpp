//
// Created by Peter Villano on 6/4/20.
//
#include <string>
#include <vector>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    string shorter, longer;
    if(s1.length() < s2.length()) {
        shorter = s1;
        longer = s2;
    } else {
        shorter = s2;
        longer = s1;
    }
    vector<bool> shorter_string_dict = vector<bool>(26, false);

    for(auto c: shorter){
        shorter_string_dict[c - 'a'] = true;
    }
    for(auto c: longer){
        if(shorter_string_dict[c-'a']){
            return "YES";
        }
    }
    return "NO";
}