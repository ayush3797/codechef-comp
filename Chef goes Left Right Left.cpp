#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int n;
		int num;
		int small_in_large=0;
		int large_in_small=0;
		scanf("%d %d",&n,&num);
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
		{
			if(arr[i]>num)
			{
				if(small_in_large==0)
				{
					small_in_large=arr[i];
					continue;
				}
				if(arr[i]<small_in_large)
				{
				 small_in_large=arr[i];
				 continue;
			    }
				else
				break;
			}
			else if(arr[i]<num)
			{
			    if(large_in_small==0)
				{
					large_in_small=arr[i];
					continue;
				}
				if(arr[i]>large_in_small)
				{
					large_in_small=arr[i];
				    continue;
				 }
				else
				break;
			}
		}
		//printf("lis=%d sil=%d\n i=%d\n",large_in_small,small_in_large,i);
		if(i==n)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
