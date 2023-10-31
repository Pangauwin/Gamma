#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Gamma {
	class GAMMA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros
#define GAMMA_CORE_TRACE(...)	::Gamma::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GAMMA_CORE_INFO(...)	::Gamma::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GAMMA_CORE_WARN(...)	::Gamma::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GAMMA_CORE_ERROR(...)	::Gamma::Log::GetCoreLogger()->error(__VA_ARGS__) 
#define GAMMA_CORE_FATAL(...)	::Gamma::Log::GetCoreLogger()->fatal(__VA_ARGS__) 

// Client log macros
#define GAMMA_CLIENT_TRACE(...)	::Gamma::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GAMMA_CLIENT_INFO(...)	::Gamma::Log::GetClientLogger()->info(__VA_ARGS__)
#define GAMMA_CLIENT_WARN(...)	::Gamma::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GAMMA_CLIENT_ERROR(...)	::Gamma::Log::GetClientLogger()->error(__VA_ARGS__) 
#define GAMMA_CLIENT_FATAL(...)	::Gamma::Log::GetClientLogger()->fatal(__VA_ARGS__) 