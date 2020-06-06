//
// Created by Peter Villano on 6/4/20.
//

#include <map>
#include "sherlock_and_anagrams.h"


using namespace std;
int sherlockAndAnagrams(string s) {
    int total_counts = 0;
    for(auto substr_len = 1; substr_len < s.length(); ++substr_len){
        map<string, int> counts;
        for(auto pos = 0; pos <= s.length() - substr_len; ++pos){
            //get substring
            string substr = s.substr(pos, substr_len);
            //sort string
            sort(substr.begin(), substr.end());
            //add to counts
            counts[substr]++;
        }
        for(const auto& count_pair : counts){
            // n choose 2
            total_counts += count_pair.second * (count_pair.second - 1) / 2;
        }
    }
    return total_counts;
}