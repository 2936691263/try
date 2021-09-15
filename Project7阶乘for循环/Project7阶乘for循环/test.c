#include<stdio.h>
//int main()
//{
//	int i;
//	int sum=1;
//	int n;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
int main()
{
	int i;
	int j;
	int sum = 1;
	int sum1 = 0;
	for (i = 1; i <= 3; i++)
	{
		sum *= i;
		sum1 += sum;
	}
	printf("sum=%d", sum1);
	return 0;
}
//int main()
//{
//	int i;
//	int sum=1;
//	int n;
//	int sum1=0;
//	for (n = 1; n <= 3; i++)
//	{
//		sum=1;
//		for(i=1;i<=n;i++)
//		{
//			sum*=i
//		}
//		sum1+=sum;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}