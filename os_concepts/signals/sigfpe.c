#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int mydiv(int ,int );
int main()
{
	int a,b,ret;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	ret=mydiv(a,b);
	signal(SIGFPE,SIG_DFL);
	printf("result:%d\n",ret);

}
int mydiv(int a,int b)
{
printf("fun...\n");
printf("a:%d\tb:%d\n",a,b);
	if(b==0)
	{
		printf("iff...\n");
		raise(SIGFPE);
		exit(-1);
	}
	
	else if(a>b)
		return a/b;
	else
		return b/a;
	
}
