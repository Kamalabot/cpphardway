#include <gtest/gtest.h>
#include "utils.h"

TEST(AlphabetTest, OnlyAlphabets){
    EXPECT_TRUE(checker_alpha("abcde"));
    EXPECT_FALSE(checker_alpha("1234"));
}

TEST(DigitTest, OnlyDigits){
    EXPECT_TRUE(checker_num("12236"));
    EXPECT_FALSE(checker_num("abcke"));
}

TEST(MixTest, DigitAlpha){
    EXPECT_TRUE(checker_mix("Alpha1"));
    EXPECT_FALSE(checker_mix("Alpha"));
}

TEST(MixSpltest, SplChars){
    EXPECT_TRUE(checker_spl("$Alpha1"));
    EXPECT_FALSE(checker_spl("Alpha1"));
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}