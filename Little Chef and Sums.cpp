#include<stdio.h>
int main()
{
		int test;
	scanf("%d",&test);
    while(test-->0)
 {
 	int index,small,n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	if(i==0)
	small=arr[i];
	if(arr[i]<small||i==0)
	{
	index=i;
	small=arr[i];
    }
    }
    printf("%d\n",index+1);
}
}
