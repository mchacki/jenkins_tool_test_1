//
// Created by Michael Hackstein on 30.09.22.
//

#include "lib/MathTest.h"

#include <iostream>

using namespace hacki;

int main() {
    MathTest t{16};
    std::cout << std::boolalpha << "Divisible " << t.isDivisible(4) << std::endl;
    std::cout << std::boolalpha << "Divisible " << t.isDivisible(3) << std::endl;
}
