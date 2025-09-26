#include <gtest/gtest.h>
#include "ch.h"


TEST(ChTest, ValidParentheses) {
    EXPECT_TRUE(ch("()"));          
    EXPECT_TRUE(ch("()()"));     
    EXPECT_TRUE(ch("(())"));       
    EXPECT_TRUE(ch(""));            
}

TEST(ChTest, InvalidParentheses) {
    EXPECT_FALSE(ch(")"));         
    EXPECT_FALSE(ch("(()"));        
    EXPECT_FALSE(ch("())"));        
    EXPECT_FALSE(ch(")("));         
}

TEST(ChTest, MixedInput) {
    EXPECT_TRUE(ch("((()))"));      
    EXPECT_FALSE(ch("((())"));      
    EXPECT_FALSE(ch("())(()"));     
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}