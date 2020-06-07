//
// Created by Peter Villano on 6/7/20.
//

#include "count_triplets_1.h"


long long countTriplets(vector<long> arr, long r) {
    map<long, long> count_map;
    sort(arr.begin(), arr.end());
    for (long item : arr) {
        ++count_map[item];
    }
    long long count = 0;
    if (r == 1) {
        for (auto kv : count_map) {
            count += (kv.second * (kv.second - 1) * (kv.second - 2)) / 6;
        }
        return count;
    }
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        if (!(it->first % (r * r))) { //divisible by r
            if (count_map.count(it->first / r) && count_map.count(it->first / (r * r))) {
                count += it->second * count_map[it->first / r] * count_map[it->first / (r * r)];
            }
        }
    }
    return count;
}