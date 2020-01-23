#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include <unistd.h>
void sig_handler(int);
int main()
{
	int i;
	for(i=0;1;i++)
	{
		printf("%d  ",i);
		sleep(2);
	signal(SIGINT,sig_handler);
	}

}
void sig_handler(int num)
{
	printf("Interrupt occured...\n");
	signal(SIGINT,SIG_DFL);
}
