#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int Add(int a, int b){
    return a + b;
}

TEST(AdditionTest, PositiveNumbers){
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_EQ(Add(10, 22), 32);
}

TEST(AdditionTest, NegativeNums){
    EXPECT_EQ(Add(-1, -2), -3);
    EXPECT_EQ(Add(-10, -22), -32);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}