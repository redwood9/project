#ifndef I_TASK_HPP
#define I_TASK_HPP

class ITask
{
public:
	 ITask()
		  {
		  };
	 virtual ~ITask()
		  {
		  };

	 virtual bool operator ()( void *p=NULL ) = 0;
};

#endif
