#include "add.h"
#include <gtest/gtest.h>

TEST(AdditionTest, PositiveNumbers){
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_EQ(Add(10, 22), 32);
}

TEST(AdditionTest, NegativeNumbers){
    EXPECT_EQ(Add(-1, -2), -3);
    EXPECT_EQ(Add(-10, -22), -32);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}