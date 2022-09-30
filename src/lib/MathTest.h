//
// Created by Michael Hackstein on 29.09.22.
//

#pragma once

#include <cstdint>

namespace hacki {
    struct MathTest {

        MathTest(uint64_t divisor);

        bool isDivisible(uint64_t value) const;

    private:
        uint64_t _divisor;
    };
}
