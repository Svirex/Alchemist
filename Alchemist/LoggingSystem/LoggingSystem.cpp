//
// Created by svirex on 02.02.2022.
//

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

#include "LoggingSystem.hpp"

namespace alchemist::logging {

std::shared_ptr<spdlog::logger> LoggingSystem::app_logger_;
std::shared_ptr<spdlog::logger> LoggingSystem::client_logger_;

void LoggingSystem::Init() {
  spdlog::set_pattern("%^ %T  %l | %n | %v %$");
  app_logger_ = spdlog::stdout_color_mt("ALCHEMIST_ENGINE");
  client_logger_ = spdlog::stdout_color_mt("CLIENT");
}

}// namespace alchemist::logging
