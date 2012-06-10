#ifndef WIN_THREAD_HPP
#define WIN_THREAD_HPP

#include "i_thread.hpp"

class WIN_Thread :public IThread
{
public:
	 virtual bool attachThread(ITask &task)
		  {
			   return task();
		  };
};

#endif
