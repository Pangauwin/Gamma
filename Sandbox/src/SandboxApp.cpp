#include <Gamma.h>

class Sandbox : public Gamma::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};


Gamma::Application* Gamma::CreateApplication()
{
	return new Sandbox();
}