#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	int i;
	for (i = 1; i < sz; i++)
	{
		int j;
		for (j = 0; j < sz - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int m =arr[j] ;
				arr[j] = arr[j + 1];
				arr[j + 1] = m;
			}
		}
	}
}
int main()
{
	int i;
	int arr[] = { 8, 9, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}