//
// Created by Michael Hackstein on 30.09.22.
//

#include <gtest/gtest.h>
#include "../src/lib/MathTest.h"

namespace hacki {
    namespace tests {
        class MainTestTest : public testing::Test {
        };

        TEST_F(MainTestTest, first_test) {
            MathTest testee{2};
            EXPECT_TRUE(testee.isDivisible(4));
            EXPECT_TRUE(testee.isDivisible(8));
        }

        TEST_F(MainTestTest, second_test) {
            MathTest testee{2};
            EXPECT_FALSE(testee.isDivisible(3));
            EXPECT_FALSE(testee.isDivisible(5));
        }

        TEST_F(MainTestTest, failing_test) {
            MathTest testee{2};
            EXPECT_TRUE(testee.isDivisible(3));
            EXPECT_TRUE(testee.isDivisible(5));
        }
    }
}
