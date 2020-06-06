//
// Created by Peter Villano on 6/4/20.
//

#include "gtest/gtest.h"
#include "sherlock_and_anagrams.h"

TEST(SherlockAndAnagramsSuite, TestOne){
    EXPECT_EQ(sherlockAndAnagrams("abba"), 4);
    EXPECT_EQ(sherlockAndAnagrams("abcd"), 0);
}
TEST(SherlockAndAnagramsSuite, TestTwo){
    EXPECT_EQ(sherlockAndAnagrams("ifailuhkqq"), 3);
    EXPECT_EQ(sherlockAndAnagrams("kkkk"), 10);
}
TEST(SherlockAndAnagramsSuite, TestThree){
    EXPECT_EQ(sherlockAndAnagrams("cdcd"), 5);
}