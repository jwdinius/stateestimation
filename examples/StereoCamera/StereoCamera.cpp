//
// Created by joe on 3/4/22.
//
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    plt::plot({1, 3, 2, 4});
    plt::save("minimal.png");
    return 0;
}
