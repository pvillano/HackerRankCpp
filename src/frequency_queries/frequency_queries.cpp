//
// Created by Peter Villano on 6/13/20.
//

#include <map>
#include "frequency_queries.h"


vector<int> freqQuery(vector<vector<int>> queries){

    map<int, int> data;
    map<int, int> frequencies;
    vector<int> response;

    for(const vector<int>& query : queries){
        int op = query[0];
        int val = query[1];

        switch (op) {
            case 1: {
                if(data.count(val)){
                    --frequencies[data[val]];
                }
                ++data[val];
                ++frequencies[data[val]];
                break;
            }
            case 2: {
                if(data.count(val) and data[val]){
                    --frequencies[data[val]];
                    --data[val];
                    ++frequencies[data[val]];
                }
                break;
            }
            case 3:{
                if(val == 0){
                    response.push_back(0);
                } else {
                    response.push_back(frequencies[val]>0);
                }
                break;
            }
            default:
                break;
        }
    }
    return response;
}