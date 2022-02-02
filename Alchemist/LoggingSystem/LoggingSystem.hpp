//
// Created by svirex on 02.02.2022.
//

#pragma once

#include <memory>
#include <spdlog/spdlog.h>

namespace alchemist::logging {

class LoggingSystem {
 public:
  static void Init();

  inline static std::shared_ptr<spdlog::logger> &GetAppLogger() {
    return app_logger_;
  }

  inline static std::shared_ptr<spdlog::logger> &GetClientLogger() {
    return client_logger_;
  }

 private:
  static std::shared_ptr<spdlog::logger> app_logger_;
  static std::shared_ptr<spdlog::logger> client_logger_;
};
}// namespace alchemist::logging

//TODO переопределить макросы для релизной сборки
// App log macros
#define AL_APP_DEBUG(...) (alchemist::logging::LoggingSystem::GetAppLogger()->debug(__VA_ARGS__))
#define AL_APP_INFO(...) (alchemist::logging::LoggingSystem::GetAppLogger()->info(__VA_ARGS__))
#define AL_APP_TRACE(...) (alchemist::logging::LoggingSystem::GetAppLogger()->trace(__VA_ARGS__))
#define AL_APP_CRITICAL(...) (alchemist::logging::LoggingSystem::GetAppLogger()->critical(__VA_ARGS__))
#define AL_APP_WARN(...) (alchemist::logging::LoggingSystem::GetAppLogger()->warn(__VA_ARGS__))

// Client log macros
#define AL_DEBUG(...) (alchemist::logging::LoggingSystem::GetClientLogger()->debug(__VA_ARGS__))
#define AL_INFO(...) (alchemist::logging::LoggingSystem::GetClientLogger()->info(__VA_ARGS__))
#define AL_TRACE(...) (alchemist::logging::LoggingSystem::GetClientLogger()->trace(__VA_ARGS__))
#define AL_CRITICAL(...) (alchemist::logging::LoggingSystem::GetClientLogger()->critical(__VA_ARGS__))
#define AL_WARN(...) (alchemist::logging::LoggingSystem::GetClientLogger()->warn(__VA_ARGS__))
