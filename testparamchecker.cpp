#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, RANGE) {
    vital bp{30,70,100};
    vital spo2{60,50,100};

    std::array<vital *,2> array_vitals{&bp,&spo2};
    ASSERT_EQ(status::abnormal, vitalsAreOk(array_vitals));
    bp.value_ = 80;
    ASSERT_EQ(status::normal, vitalsAreOk(array_vitals));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
