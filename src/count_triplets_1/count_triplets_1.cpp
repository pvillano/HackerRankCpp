//
// Created by Peter Villano on 6/7/20.
//

#include "count_triplets_1.h"


long countTriplets(vector<long> arr, long r) {
    long count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            // could be replaced with binary search
            for (int k = j + 1; k < arr.size(); ++k) {
                if (arr[i] * r == arr[j] && arr[j] * r == arr[k]) {
                    ++count;
                }
            }
        }
    }
    return count;
}