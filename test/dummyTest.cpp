#include <gtest/gtest.h>
#include "Dummy.hpp"

TEST(DummyTest, dummyFunction) {
	EXPECT_EQ(dummyFunction(5, 4), 29);
	EXPECT_EQ(dummyFunction(2, 3), 7);
	EXPECT_NE(dummyFunction(6, 4), 2);
}