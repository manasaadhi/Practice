#include<stdio.h>
#include<string.h>
char * mystrrev(char * str,int len)
{
	char c;
	static int i=0;

	if(len<=i)
		return str;
	c=str[i];
	str[i]=str[len-1];
	str[len-1]=c;
	i++;len--;
	return mystrrev(str,len);
}

int main()
{
	char s[15],*res,len;
	printf("Enter a string\n");
	scanf("   %[^\n]s ",s);
	printf("Before reverse:%s\n",s);
	len=strlen(s);
	printf("len:%d\n",len);
	res=mystrrev(s,len);
	printf("After reverse:%s\n",res);
}
