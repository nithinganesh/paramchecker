#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, RANGE) {
    ASSERT_EQ(true, isValidRange(100, 40, 150));
    ASSERT_EQ(false, isValidRange(105.6, -1.0045, 100.01));
    ASSERT_EQ(true, isValidRange(-1, -4, 0));
}

TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
