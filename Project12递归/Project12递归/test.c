#include<stdio.h>

/*void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d", n % 10);
}
//输出1 2 3 4
//print(123)4
//print(n/10)+printf("%d",n%10)
//函数要嵌套,放在条件里
//print(12)34
//print(1)234
int main()
{
	int num;
	scanf_s("%d", &num);
	print(num);
	return 0;
}
*/
/*int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//mystrlen(bit)
//1+mystrlen(it)
//函数嵌套，放在条件下
//1+1+mystrlen(t)
//1+1+1+mystrlen( )

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}*/
int Facl(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Facl(n - 1);
}//把参数用上！！！！！
//1*Facl(i+1)

int main()
{
	int ret;
	
	ret = Facl(5);
	printf("%d", ret);
	return 0;
}