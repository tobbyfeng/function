#include <stdio.h>

int two_point_lookup(int *arr,int size,int num,int left,int right,int i)
{
	int mid = (left+right)/2;
	if(arr[mid]==num)
	{

		printf("此数字在第%d个",mid+1);
		return i = 1;
	}
	if(arr[mid] < num)
	{
		left = mid+1;
	}
	else if(arr[mid] > num)
	{
		right = mid-1;
		

	}
	if(size!=1)
	{
		two_point_lookup(arr,size/2,num,left,right,i);
	}
	return 0;
}

int main()
{
	int i = 0;
	int num = 4;
	int arr[] = {1,2,4,6,7,12};
	int size = sizeof(arr)/sizeof(int);
	int left = 0;
	int right = size-1;
	i = two_point_lookup(arr,size,num,left,right,i);
	if(i == 0)
	{
		printf("没有这个数");
	}
	printf("\n");
}
