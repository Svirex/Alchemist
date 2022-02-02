//
// Created by svirex on 01.02.2022.
//
#include <iostream>

#include "EntryPoint.hpp"

int main() {
  std::cout << "Start app" << std::endl;
  auto app = alchemist::CreateApplication();
  app->Run();
  delete app;
  return 0;
}
