// Copyright 2022 Grigorev Matvey

#ifndef MODULES_GRIGOREV_MAVEY_TRIANGLE_PARAMETERS_INCLUDE_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_H_
#define MODULES_GRIGOREV_MAVEY_TRIANGLE_PARAMETERS_INCLUDE_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_H_

#include <utility>
#include <vector>

class Triangle {
 private:
    std::pair<double, double> A;
    std::pair<double, double> B;
    std::pair<double, double> C;

 public:
    Triangle();
    Triangle(std::pair<double, double> _A, std::pair<double, double> _B,
        std::pair<double, double> _C);
    Triangle(const Triangle& t);
    ~Triangle();

    std::pair<double, double> getA();
    std::pair<double, double> getB();
    std::pair<double, double> getC();

    double getAB();
    double getBC();
    double getAC();

    // get perimeter
    double getP();
    // get square
    double getS();

    double getCosA();
    double getCosB();
    double getCosC();
};

#endif  // MODULES_GRIGOREV_MAVEY_TRIANGLE_PARAMETERS_INCLUDE_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_H_
