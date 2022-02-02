//
// Created by svirex on 01.02.2022.
//

#pragma once

namespace alchemist {

class Application {
 public:
  Application() = default;
  virtual ~Application() = default;

  void Run() {
    while (true)
      ;
  }
};

}// namespace alchemist
