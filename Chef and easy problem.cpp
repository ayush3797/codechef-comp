#include<stdio.h>
int partition(int low,int high,int *arr)
{
	int j=low;
		int i=low-1;
		int pivot=high;
		for(j=low;j<high;j++)
		{
			if(arr[j]<=arr[pivot])
			{
				i+=1;
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
			int temp=arr[i+1];
			arr[i+1]=arr[pivot];
			arr[pivot]=temp;
			return i+1;
}
void quicksort(int low,int high,int *arr)
{
	if(high>low)
	{
		int p=partition(low,high,arr);
		quicksort(low,p-1,arr);
		quicksort(p+1,high,arr);
	}
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		long int sum=0;
		quicksort(0,n-1,arr);
		int i=0;
		for(i=n-1;i>=0;i-=2)
		sum+=arr[i];
		printf("%ld\n",sum);
	}
	return 0;
}
