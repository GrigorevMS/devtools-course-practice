// Copyright 2022 Grigorev Matvey

#include "include/triangle_app.h"

#include <iostream>
#include <stdexcept>
#include <string>

#include "include/grigorev_matvey_triangle_parameters.h"

std::string application::operator()(int argc, char** argv) {
  float result = -1.f;
  if (argc == 1) {
    return help(argv[0]);
  }
  if (argc < 4) {
    return "Error: too few arguments";
  }
  if (argc > 4) {
    return "Error: too many arguments";
  }
  arguments args;
  if (validate(argv[0])) args = parse_args(argc, argv);
  Triangle triangle(args.a, args.b, args.c);
  if (args.operation == "perimeter") result = triangle.getP();
  if (args.operation == "square") result = triangle.getS();
  if (args.operation == "cosA") result = triangle.getCosA();
  if (args.operation == "cosB") result = triangle.getCosB();
  if (args.operation == "cosC") result = triangle.getCosC();
  return std::to_string(result);
}

std::string application::help(const std::string& appname) {
  return "This is an application to demonstrate coordinates of the vertices of "
         "and calculation of the main parameters of a triangle"
         "the triangle\n Format for arguments:\n" +
         appname +
         "(x1,y1) (x2,y2) (x3,y3) <operation> \n Where <operation> is:\n1. "
         "perimeter\n2. "
         "square\n3. "
         "cosA\n4. "
         "cosB\n5. "
         "cosC\n";
}

bool application::validate(const std::string& str) { return true; }

application::arguments application::parse_args(int argc, char** argv) {
  arguments args;
  for (int i = 1; i <= 2; i++) {
    std::string dot = argv[i];
    auto delimeter = dot.find(",");
    float f = std::stof(dot.substr(0, delimeter));
    float s = std::stof(dot.substr(delimeter + 1));
    if (i == 1) args.a = {f, s};
    if (i == 2) args.b = {f, s};
  }
  args.operation = argv[3];
  if (argc > 4) args.side = std::stoi(argv[4]);
  return args;
}
