#ifndef LINUX_THREAD_HPP
#define LINUX_THREAD_HPP

#include "i_thread.hpp"

class LINUX_Thread: public IThread
{
public:
	 virtual bool attachThread(ITask &task)
		  {
			   return task();
		  };
	 

};

#endif
