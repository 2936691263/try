#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "I may love ashan.";
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	int right = strlen(arr1) - 1;//�����ַ�������
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������cls���������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int sz;
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	sz = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right=sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}
int binary_search(int arr[],int k,int sz)//������arr�Ǹ�ָ��
{
	int left=0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right=mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]==k)
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6,7, 8 ,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int ret = binary_search(arr, k,sz);//����ȥ��arr[]����Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
	}
	return 0;
}
