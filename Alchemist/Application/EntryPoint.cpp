//
// Created by svirex on 01.02.2022.
//
#include <iostream>
#include <LoggingSystem/LoggingSystem.hpp>

#include "EntryPoint.hpp"

int main() {
  alchemist::logging::LoggingSystem::Init();
  AL_APP_WARN("Start app {}", 1);
  AL_INFO("Start app {}", 2);
  auto app = alchemist::CreateApplication();
  app->Run();
  delete app;
  return 0;
}
