#ifndef THREAD_WRAP_HPP
#define THREAD_WRAP_HPP

#include <iostream>
#include "i_task.hpp"

template<typename T>
class TheadPool
{
private:
	 int m_threadcount;   //Ïß³ÌÊý
	 T *m_thread;
public:
	 TheadPool(int threadcount):m_threadcount(threadcount),
							m_thread(NULL)
		  {
			   m_thread = new T();
		  };
	 ~TheadPool()
		  {
			   delete m_thread;
		  };

	 bool attachThread(ITask &task)
		  {
			   m_thread->attachThread(task);
		  };
	 
};


#endif
