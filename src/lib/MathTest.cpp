//
// Created by Michael Hackstein on 29.09.22.
//

#include "MathTest.h"

using namespace hacki;

MathTest::MathTest(uint64_t divisor) : _divisor(divisor) {

}

bool MathTest::isDivisible(uint64_t value) const {
    return value % _divisor == 0;
}
