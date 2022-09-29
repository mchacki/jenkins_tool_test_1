//
// Created by Michael Hackstein on 29.09.22.
//

#pragma once

#include <numeric>

namespace hacki {
    struct MathTest {

        MathTest(uint64_t divisor);

        bool isDivisible(uint64_t value) const;

    private:
        uint64_t _divisor;
    };
}
