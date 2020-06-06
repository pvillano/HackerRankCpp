//
// Created by Peter Villano on 6/6/20.
//

#include "crush.h"


using namespace std;

long arrayManipulation(int n, const vector<vector<int>> &queries) {
    map<int, long> sparse_arr;
    sparse_arr[0] = 0;
    sparse_arr[n - 1] = 0;
    for (const auto &query : queries) {
        const int start = query[0] - 1;
        const int end = query[1];
        sparse_arr[start] = 0;
        sparse_arr[end] = 0;
    }
    for (const auto &query : queries) {
        const int start = query[0] - 1;
        const int end = query[1];
        const int fill = query[2];
        for (auto it = sparse_arr.find(start); it != sparse_arr.find(end); ++it) {
            it->second += fill;
        }
    }
    auto pr = max_element(
            begin(sparse_arr),
            end(sparse_arr),
            [](const auto &p1, const auto &p2) {
                return p1.second < p2.second;
            }
    );
    return pr->second;
}
