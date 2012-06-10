#ifndef I_THREAD_HPP
#define I_THREAD_HPP

class IThread
{
public:
	 IThread()
		  {
		  };
	 virtual IThread()
		  {
		  };
	 /** 
	  * 获得一个线程去做某件事情
	  * 
	  * @param task 任务类,这是个仿函数
	  * 
	  * @return 成功返回true,否则返回false
	  */
	 virtual bool attachThread(ITask &task)=0;
	 
};

#endif
