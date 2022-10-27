// Copyright 2022 Grigorev Matvey
#include <gtest/gtest.h>
#include <utility>
#include "include/grigorev_matvey_triangle_parameters.h"

#define EPS 0.0001

TEST(Grigorev_triangle_parameters, Default_constructor) {
    // Arrange
    std::pair<double, double> e = { 0, 0 };

    // Act
    Triangle t;

    // Assert
    ASSERT_EQ(t.getA(), e);
    ASSERT_EQ(t.getB(), e);
    ASSERT_EQ(t.getC(), e);
}
TEST(Grigorev_triangle_parameters, Param_constructor) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    std::pair<double, double> e1 = { 0, 0 };
    std::pair<double, double> e2 = { 2, 0 };
    std::pair<double, double> e3 = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_EQ(t.getA(), e1);
    ASSERT_EQ(t.getB(), e2);
    ASSERT_EQ(t.getC(), e3);
}
TEST(Grigorev_triangle_parameters, Copy_constructor) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    std::pair<double, double> e1 = { 0, 0 };
    std::pair<double, double> e2 = { 2, 0 };
    std::pair<double, double> e3 = { 0, 2 };

    // Act
    Triangle t(A, B, C);
    Triangle t1(t);

    // Assert
    ASSERT_EQ(t1.getA(), e1);
    ASSERT_EQ(t1.getB(), e2);
    ASSERT_EQ(t1.getC(), e3);
}

TEST(Grigorev_triangle_parameters, GetAB) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getAB(), 2, EPS);
}
TEST(Grigorev_triangle_parameters, GetBC) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getBC(), 2.82843, EPS);
}
TEST(Grigorev_triangle_parameters, GetAC) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getAC(), 2, EPS);
}

TEST(Grigorev_triangle_parameters, GetP) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getP(), 6.828427, EPS);
}
TEST(Grigorev_triangle_parameters, GetS) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getS(), 2, EPS);
}

TEST(Grigorev_triangle_parameters, GetCosA) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getCosA(), 0, EPS);
}
TEST(Grigorev_triangle_parameters, GetCosB) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getCosB(), 0.707107, EPS);
}
TEST(Grigorev_triangle_parameters, GetCosC) {
    // Arrange
    std::pair<double, double> A = { 0, 0 };
    std::pair<double, double> B = { 2, 0 };
    std::pair<double, double> C = { 0, 2 };

    // Act
    Triangle t(A, B, C);

    // Assert
    ASSERT_NEAR(t.getCosC(), 0.707107, EPS);
}
