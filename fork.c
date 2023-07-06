#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int a=10,b=11;
	pid_t pid=1;
	pid=fork();

	if(pid==0)
	{
		printf("This is fork 1 pid:%d",getpid());
	}
	else
	{
		printf("This is parent process %d and child is %d", getpid(),getppid());
	}
}
