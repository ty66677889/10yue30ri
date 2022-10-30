#include <stdio.h>
int dinary_search(int arr[],int size,int ret)
{
	int left=0;
int	right=size-1;

	while(left<=right)
	{	int mid=(left+right)/2;
		
		if(arr[mid]<ret)
		{
			left=mid+1;
		}
		else
		{
		if(arr[mid]>ret)
		{
			right=mid-1;
		}	
		else
		{
			return mid;
		}
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k;
	int size=sizeof(arr)/sizeof(arr[0]);
	int ret=dinary_search(arr,size,k);
	if(ret==-1)
	{
		printf("找不到下标");
	}
	else
	{
	printf("下标是%d",ret);
	
	}
return 0;
}
