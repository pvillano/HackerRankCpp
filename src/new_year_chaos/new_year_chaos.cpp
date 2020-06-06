//
// Created by Peter Villano on 6/6/20.
//

#include "new_year_chaos.h"

using namespace std;

string stringMinimumBribes(vector<int> q) {
    int count = 0;
    for (int i = 0; i < q.size(); ++i) {
        int bribes = q[i] - (i + 1);
        if (bribes > 2) {
            return "Too chaotic";
        }
    }
    for(int i = 1; i < q.size(); ++i){
        for(int j = i; j > 0 && q[j-1] > q[j]; --j){
            swap(q[j], q[j-1]);
            count++;
        }
    }
    return to_string(count);
}

void minimumBribes(vector<int> q) {
    cout << stringMinimumBribes(q) << endl;
}
