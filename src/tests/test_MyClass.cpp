import CoordXy;  // 导入我们的类模块
#include <gtest/gtest.h>

TEST(MyClassTest, Constructor) {
    CoordXy s;
    EXPECT_DOUBLE_EQ(s.X(), 0.0);
}