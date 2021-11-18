#include "Application.h"

#include <iostream>

namespace Fennec {
  Application::Application(){}
  Application::~Application(){}

  void Application::Run(){
    std::cout << "running" << std::endl;
    while(true);
  }
}

