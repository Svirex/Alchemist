//
// Created by svirex on 01.02.2022.
//

#include <Alchemist/Alchemist.hpp>

class Sandbox : public alchemist::Application {};

alchemist::Application *alchemist::CreateApplication() {
  return new Sandbox();
}
