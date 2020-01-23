#include<stdio.h>
#include<signal.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>
int main()
{
	int pid;
	pid=fork();
	if(pid<0)
	{
		perror("fork fails...");
		exit(-1);
	}
	else if(pid==0)
	{
		printf("child process.....\n");
		sleep(50);
		kill(getppid(),SIGQUIT);
	}
	else
	{
		printf("Parent process....\n");
		signal(SIGQUIT,SIG_DFL);
	}

}
