#include "abc/abc049/abc049c.cpp"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Test1, case1) {

  std::string in = "dreamer"s;
  std::string out = "YES"s;

  std::ostringstream ost;
  std::istringstream ist(in + "\n");

  solve(ist, ost);
  std::string ostr = ost.str();

  EXPECT_EQ(ostr, out + "\n");
}
