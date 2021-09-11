#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//system
#include<string.h>//strcmp

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");

again:
	printf("注意！系统将在60s之后关机！若要取消关机，请输入撤销\n");
	scanf("%s", input);
	if (strcmp(input, "撤销")==0)//判断input中放的是不是撤销-strcmp-string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}