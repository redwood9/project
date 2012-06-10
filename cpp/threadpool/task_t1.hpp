#ifndef TASK_T1_HPP
#define TASK_T1_HPP

#include <iostream>
#include "i_task.hpp"



class TaskT1:public ITask
{
public:
	 TaskT1()
		  {
		  };

	 virtual bool operator ()( void *p=NULL )
		  {
			   std::cout<<"this is task t1"<<std::endl;
		  };
	 
};

#endif
