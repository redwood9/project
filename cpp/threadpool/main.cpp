#include "win_thread.hpp"
#include "linux_thread.hpp"
#include "thread_wrap.hpp"
#include "task_t1.hpp"

int main(int argc, char * argv[])
{
	 TheadPool<LINUX_Thread> pool(10);
	 TaskT1 t;
	 pool.attachThread(t);
	 
	 return 1;
}
