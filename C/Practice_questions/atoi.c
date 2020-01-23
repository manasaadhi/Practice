#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int AtoI(char *str)
{
	int i,len,result=0;
	len=strlen(str);
	//printf("hii");
	for(i=0;i<len;i++)
	{
		result=result*10+(str[i]-'0');
		//printf("%d",result);
	}
	return result;
}
int main()
{
	char s[10];
	int i,res;
	printf("Enter a string in a number format\n");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[0]>='0'&&s[0]<='9')
		{
			continue;
		}
		else
		{
			printf("0");
			exit(0);
		}
	}
	res=AtoI(s);
	printf("res:%d\n",res);
}


