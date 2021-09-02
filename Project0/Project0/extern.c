#include<stdio.h>
int main()
{
	extern int num;//ÉùÃ÷externÍâ²¿·ûºÅ
	int a;
	int b;
	int c;
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("c=%d,num=%d\n", c,num);
}