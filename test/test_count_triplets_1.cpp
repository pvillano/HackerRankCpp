//
// Created by Peter Villano on 6/7/20.
//

#include <fstream>
#include "gtest/gtest.h"
#include "count_triplets_1.h"

using namespace std;

TEST(TestCountTriplets1, TestCase2) {
    EXPECT_EQ(countTriplets(vector<long>(100, 1), 1), 161700);
}

TEST(TestCountTriplets1, TestCase3) {
    vector<long> arr = {};
    long n;
    long r;
    ifstream infile("test_count_triplets_1_input_03.txt");
    infile >> n >> r;
    long temp;
    for (int i = 0; i < n; ++i) {
        infile >> temp;
        arr.push_back(temp);
    }
    EXPECT_EQ(countTriplets(arr, r), 166661666700000);
}

TEST(TestCountTriplets1, TestCase6) {
    vector<long> arr = {};
    long n;
    long r;
    ifstream infile("test_count_triplets_1_input_06.txt");
    infile >> n >> r;
    long temp;
    for (int i = 0; i < n; ++i) {
        infile >> temp;
        arr.push_back(temp);
    }
    EXPECT_EQ(countTriplets(arr, r), 2325652489);
}

TEST(TestCountTriplets1, TestCaseFoo) {
    EXPECT_EQ(countTriplets({1,2,1,2,4}, 2), 3);
}