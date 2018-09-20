#pragma once

#include "Task.h"

class TRN::Engine::Task::Handle
{
public :
	bool running;
	bool stopped;
	std::thread thread;
	std::mutex mutex;
	std::condition_variable cond;
};
