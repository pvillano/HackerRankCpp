//
// Created by Peter Villano on 6/13/20.
//


#include "gtest/gtest.h"
#include "frequency_queries.h"

TEST(FrequencyQueriesSuite, SampleTestCase2){
    vector<vector<int>> input = {
            {1, 3},
            {2, 3},
            {3, 2},
            {1, 4},
            {1, 5},
            {1, 5},
            {1, 4},
            {3, 2},
            {2, 4},
            {3, 2},
    };
    EXPECT_EQ(freqQuery(input), vector<int>({0,1,1}));
}