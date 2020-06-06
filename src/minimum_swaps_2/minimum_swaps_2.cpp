//
// Created by Peter Villano on 6/6/20.
//

#include "minimum_swaps_2.h"


using namespace std;

int minimumSwaps(vector<int> arr){
    int count = 0;
    for(int i = 0; i < arr.size(); ++i){
        while(arr[i] != i + 1){
            swap(arr[i], arr[arr[i]-1]);
            ++count;
        }
    }
    return count;
}