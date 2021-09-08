#include<stdio.h>
Add(int x, int y)
{
	int z = x + y;
	return z;
}//f(x,y)=x+y;
int main()
{
	int a;
	int b;
	int sum;
	int sum1;
	scanf_s("%d%d", &a, &b);
	sum = Add(a, b);//f(x,y)=x+y
	sum1 = Add(2, 3);
	printf("sum=%d sum1=%d\n", sum,sum1);
}