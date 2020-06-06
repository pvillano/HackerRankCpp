//
// Created by Peter Villano on 6/6/20.
//

#include "crush.h"


using namespace std;

long arrayManipulation(int n, const vector<vector<int>> &queries) {
    //O(n log n) version
    vector<pair<int, long>> fuck(queries.size() * 2);
    for (const auto &query : queries) {
        const int start = query[0] - 1;
        const int end = query[1];
        const int val = query[2];
        fuck.emplace_back(start, val);
        fuck.emplace_back(end, -val);
    }
    sort(fuck.begin(), fuck.end());
    long running = 0;
    long best = 0;
    for (const auto &it : fuck) {
        running += it.second;
        best = max(best, running);
    }
    return best;
}
