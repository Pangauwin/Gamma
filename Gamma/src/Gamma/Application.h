#pragma once

#include "Core.h"

namespace Gamma {

	class GAMMA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the client
	Application* CreateApplication();
}