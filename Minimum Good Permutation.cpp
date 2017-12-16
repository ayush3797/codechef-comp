#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int n,temp,i;
		scanf("%d",&n);
		int arr[n+1];
		for(i=1;i<n+1;i++)
		arr[i]=i;
		if(n%2==0)
		{
		for(int i=1;i<n;i+=2)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	   }
		else
		{
		for(i=1;i<n-1;i+=2)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		temp=arr[i];
		arr[i]=arr[i-1];
		arr[i-1]=temp;
		}
			for(i=1;i<n+1;i++)
			printf("%d ",arr[i]);
	printf("\n");}
}
