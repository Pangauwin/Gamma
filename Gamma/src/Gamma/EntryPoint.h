#pragma once


#ifdef GAMMA_PLATFORM_WINDOWS

extern Gamma::Application* Gamma::CreateApplication();

int main(int argc, char** argv)
{
	printf("Gamma Engine\n");
	auto app = Gamma::CreateApplication();
	app->Run();
	delete app;
}

#endif // GAMMA_PLATFORM_WINDOWS
