#include "stdafx.h"
#include "Task_impl.h"
#include "Helper/Logger.h"

TRN::Engine::Task::Task() :
	handle(std::make_unique<Handle>())
{
	TRACE_LOGGER;
	handle->running = false;
	handle->stopped = false;
}

TRN::Engine::Task::~Task() 
{
	TRACE_LOGGER;

	handle.reset();
}

void TRN::Engine::Task::start()
{
	TRACE_LOGGER;
	if (handle->running)
		throw std::runtime_error("Thread is already running");
	handle->running = true;
	handle->thread = std::thread([&]()
	{
	
		initialize();
		while (handle->running)
		{
			try
			{
				body();
			}
			catch (std::exception &e)
			{
				ERROR_LOGGER << e.what() ;
				stop();
			}
		}
		uninitialize();
		std::unique_lock<std::mutex> lock(handle->mutex);
		handle->stopped = true;
		lock.unlock();
		handle->cond.notify_one();
	});
	handle->thread.detach();

}

void TRN::Engine::Task::join()
{
	using namespace std::chrono_literals;
	TRACE_LOGGER;
	std::unique_lock<std::mutex> lock(handle->mutex);
	while (!handle->stopped)
		handle->cond.wait_for(lock, 10ms);
}
void TRN::Engine::Task::initialize()
{
	TRACE_LOGGER;
	// INFORMATION_LOGGER <<   __FUNCTION__ ;
}

void TRN::Engine::Task::uninitialize()
{
	TRACE_LOGGER;
	// INFORMATION_LOGGER <<   __FUNCTION__ ;
}


void TRN::Engine::Task::stop()
{
	TRACE_LOGGER;
	handle->running = false;
}
