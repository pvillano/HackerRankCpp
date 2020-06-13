//
// Created by Peter Villano on 6/13/20.
//

#include "ctci_bubble_sort.h"


void countSwaps(vector<int> a){
    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++count;
            }
        }
    }
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << *a.begin() << endl;
    cout << "Last Element: "<< *a.rbegin() << endl;
}