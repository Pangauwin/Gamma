#pragma once


#ifdef GAMMA_PLATFORM_WINDOWS

extern Gamma::Application* Gamma::CreateApplication();

int main(int argc, char** argv)
{
	Gamma::Log::Init();
	GAMMA_CORE_WARN("Initialized Log !");
	int a = 23;
	GAMMA_CLIENT_INFO("Hello ! Var={0}", a);

	auto app = Gamma::CreateApplication();
	app->Run();
	delete app;
}

#endif // GAMMA_PLATFORM_WINDOWS
