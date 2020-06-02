//
// Created by Peter Villano on 6/2/20.
//

#include "gtest/gtest.h"
#include "ctci_ransom_note.h"

TEST(CTCIRansomSuite, TestOne){
    vector<string> magazine{"give", "me", "one", "grand", "today", "night"};
    vector<string> note{"give", "one", "grand", "today"};
    EXPECT_TRUE(boolCheckMagazine(magazine, note));
}