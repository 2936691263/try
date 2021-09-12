#include<stdio.h>
int test(int a)
{
	if (a % 2 == 1)
		return a;
}
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (test(i))
			printf("%d\n", i);
	}
	return 0;
}