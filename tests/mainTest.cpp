#include <gtest/gtest.h>
#include "../src/main.h"

TEST(MainTest, myFunc) {
	EXPECT_EQ(myFunc(4,5),29);
	EXPECT_EQ(5,5);
}