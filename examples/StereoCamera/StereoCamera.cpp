//
// Created by joe on 3/4/22.
//
#include <Eigen/Dense>
#include <manif/Rn.h>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;
using namespace Eigen;

int main() {

    // manif namespace and shortcuts
    using manif::Rn;
    using manif::RnTangent;

    static constexpr int32_t StateDim = 1;
    static constexpr int32_t MeasDim = 1;

    // Define data types
    typedef Rn<double, StateDim>               State;
    typedef RnTangent<double, StateDim>        Perturbation;
    typedef Matrix<double, StateDim, StateDim> StateCov;
    typedef Matrix<double, MeasDim, 1>         Meas;
    typedef Matrix<double, MeasDim, MeasDim>   MeasCov;

    static constexpr int32_t NumTrials = 1e6;
    double const f = 400;  // pixels
    double const b = 0.1;  // m
    double const R = 0.09;  // pixels^2

    State xTrue = Matrix<double, StateDim, 1>(22);
    StateCov P0 = StateCov(9);

    Perturbation p, q;
    StateCov L;
    auto r = p + L*q;
    std::vector<State, aligned_allocator<State>> xSamples(NumTrials);
    std::vector<Meas, aligned_allocator<Meas>> ySamples(NumTrials);
    std::vector<State, aligned_allocator<State>> xMAP(NumTrials);
    for (int32_t trial = 0; trial < NumTrials; ++trial) {
        // draw xtrue from prior distribution - perturbation lives in TangentSpace
        // draw ymeas from measurement distribution
    }
    //plt::plot({1, 3, 2, 4});
    //plt::save("minimal.png");
    return 0;
}
