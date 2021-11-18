#pragma once

#include "core.h"

namespace Fennec {
  class FENNEC_API Application
  {
    public:
      Application();
      virtual ~Application();

      void Run();
  };

  Application* CreateApplication();
};