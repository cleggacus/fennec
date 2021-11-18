#include <Fennec.h>

class Sandbox : public Fennec::Application
{
  public:
    Sandbox(){}
    ~Sandbox(){}
};

Fennec::Application* Fennec::CreateApplication(){
  return new Sandbox();
}