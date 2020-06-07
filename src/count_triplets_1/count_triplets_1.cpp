//
// Created by Peter Villano on 6/7/20.
//

#include "count_triplets_1.h"

class pairHash{
public:
    size_t operator()(const pair<long, long> &k) const{
        return k.first ^ (13 * k.second);
    }
};

long long countTriplets(vector<long> arr, long r) {
    long count = 0;
    unordered_map<pair<long, long>, int, pairHash> seen_pairs;
    unordered_map<long, long> seen_singles;
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        if (seen_pairs.count({*it * r, *it * r * r})){
            count += seen_pairs[{*it * r, *it * r * r}];
        }
        if (seen_singles.count(*it * r)) {
            seen_pairs[{*it, *it * r}] += seen_singles[*it * r];
        }
        ++seen_singles[*it];
    }
    if (r==1){
        count=0;
        for(auto kv : seen_singles){
            count += (kv.second * (kv.second - 1) * (kv.second - 2)) / 6;
        }
    }
    return count;
}