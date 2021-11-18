#pragma once

extern Fennec::Application* Fennec::CreateApplication();

int main(){
  auto app = Fennec::CreateApplication();
  app -> Run();
  delete app;
  return 0;
}