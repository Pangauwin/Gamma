#pragma once


#ifdef GAMMA_PLATFORM_WINDOWS
	#ifdef GAMMA_BUILD_DLL
		#define GAMMA_API __declspec(dllexport)
	#else
		#define GAMMA_API __declspec(dllimport)
	#endif
#else
	#error Hazel only support Windows !
#endif