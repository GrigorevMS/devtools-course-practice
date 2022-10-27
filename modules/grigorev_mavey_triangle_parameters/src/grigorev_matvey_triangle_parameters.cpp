// Copyright 2022 Grigorev Matvey

#include "include/grigorev_matvey_triangle_parameters.h"
#include <math.h>
#include <utility>

Triangle::Triangle() {
    A = { 0, 0 };
    B = {0, 0};
    C = {0, 0};
}
Triangle::Triangle(const Triangle& t) {
    A = t.A;
    B = t.B;
    C = t.C;
}
Triangle::Triangle(std::pair<double, double> _A, std::pair<double, double> _B,
    std::pair<double, double> _C) {
    A = _A;
    B = _B;
    C = _C;
}
Triangle::~Triangle() {
    A = { 0, 0 };
    B = { 0, 0 };
    C = { 0, 0 };
}

std::pair<double, double> Triangle::getA() {
    return A;
}
std::pair<double, double> Triangle::getB() {
    return B;
}
std::pair<double, double> Triangle::getC() {
    return C;
}

double Triangle::getAB() {
    return sqrt((A.first - B.first) * (A.first - B.first)
        + (A.second - B.second) * (A.second - B.second));
}
double Triangle::getBC() {
    return sqrt((B.first - C.first) * (B.first - C.first)
        + (B.second - C.second) * (B.second - C.second));
}
double Triangle::getAC() {
    return sqrt((A.first - C.first) * (A.first - C.first)
        + (A.second - C.second) * (A.second - C.second));
}

double Triangle::getP() {
    return getAB() + getBC() + getAC();
}
double Triangle::getS() {
    return 0.5 * std::abs((B.first - A.first) * (C.second - A.second)
        - (C.first - A.first) * (B.second - A.second));
}

double Triangle::getCosA() {
    double x1 = B.first - A.first;
    double y1 = B.second - A.second;

    double x2 = C.first - A.first;
    double y2 = C.second - A.second;

    double cos = (x1 * x2 + y1 * y2) / (sqrt(x1 * x1 + y1 * y1)
        * sqrt(x2 * x2 + y2 * y2));

    return cos;
}
double Triangle::getCosB() {
    double x1 = C.first - B.first;
    double y1 = C.second - B.second;

    double x2 = A.first - B.first;
    double y2 = A.second - B.second;

    double cos = (x1 * x2 + y1 * y2) / (sqrt(x1 * x1 + y1 * y1)
        * sqrt(x2 * x2 + y2 * y2));

    return cos;
}
double Triangle::getCosC() {
    double x1 = B.first - C.first;
    double y1 = B.second - C.second;

    double x2 = A.first - C.first;
    double y2 = A.second - C.second;

    double cos = (x1 * x2 + y1 * y2) / (sqrt(x1 * x1 + y1 * y1)
        * sqrt(x2 * x2 + y2 * y2));

    return cos;
}
