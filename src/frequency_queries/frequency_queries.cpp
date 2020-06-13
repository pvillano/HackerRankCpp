//
// Created by Peter Villano on 6/13/20.
//

#include <map>
#include "frequency_queries.h"


bool containsFrequency(const map<int, int>& data, int freq){
    for( const auto& kv : data){
        if(kv.second == freq){
            return true;
        }
    }
    return false;
}

vector<int> freqQuery(vector<vector<int>> queries){

    map<int, int> data;
    vector<int> response;

    for(const vector<int>& query : queries){
        switch (query[0]) {
            case 1: {
                data[query[1]] += 1;
                break;
            }
            case 2: {
                data[query[1]] = max(data[query[1]] - 1, 0);
                break;
            }
            case 3:{
                response.push_back(containsFrequency(data, query[1]));
                break;
            }
            default:
                break;
        }
    }
    return response;
}