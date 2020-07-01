#include <gtest/gtest.h>

TEST(exampletests, equaltrue) {
    EXPECT_TRUE(true);
}

TEST(exampletests, equalfalse) {
    EXPECT_TRUE(false);
}

TEST(exampletests, exampletests_equalfalse123_Test) {
    EXPECT_TRUE(false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}

