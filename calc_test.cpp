#include <gtest/gtest.h>
#include "calc.hpp"
#include <gmock/gmock.h>

TEST(sumFunction , Test_1)
{
    //arrange
    //call
    EXPECT_EQ(5, sum(2,3));

    //action
}

TEST(sumFunction , Test_2)
{
    //arrange
    //call
    EXPECT_NE(5, sum(12,3));
    
    //action
}

TEST(SubFunction , Test_3)
{
    //arrange
    //call
    EXPECT_EQ(-1, sub(2,3));
    
    //action
}

TEST(SubFunction , Test_4)
{
    //arrange
    //call
    EXPECT_NE(8, sum(12,3));
    
    //action
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}