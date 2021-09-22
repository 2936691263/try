#include<stdio.h>
void f(int x[], int n)
{
	if (n > 1)
	{
		printf("%d", x[n - 1]);
		f(x, n - 1);
		printf("%d", x[n - 1]);
	}
	else
		printf("%d", x[0]);
}
int main()
{
	int z[3] = { 1, 2, 3 };
	f(z, 3);
	printf("\n");
	return 0;
}