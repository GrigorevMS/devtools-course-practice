// Copyright 2022 Grigorev Matvey

#ifndef MODULES_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_INCLUDE_TRIANGLE_APP_H_
#define MODULES_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_INCLUDE_TRIANGLE_APP_H_

#include <string>
#include <utility>

#include "./grigorev_matvey_triangle_parameters.h"

class application {
 public:
  struct arguments {
    std::pair<double, double> a;
    std::pair<double, double> b;
    std::pair<double, double> c;
    std::string operation{""};
    int side{0};
  };

 public:
  std::string operator()(int argc, char** argv);

 private:
  std::string help(const std::string& appname);
  bool validate(const std::string& str);
  arguments parse_args(int argc, char** argv);
};

#endif  // MODULES_GRIGOREV_MATVEY_TRIANGLE_PARAMETERS_INCLUDE_TRIANGLE_APP_H_

