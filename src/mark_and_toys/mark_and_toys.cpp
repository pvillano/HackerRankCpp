//
// Created by Peter Villano on 6/13/20.
//

#include "mark_and_toys.h"

int maximumToys(vector<int> prices, int k){
    sort(prices.begin(), prices.end());

    int count = 0;

    for (const int& price : prices) {
        if(price <= k){
            ++count;
            k -= price;
        } else {
            return count;
        }
    }
    return count;
}