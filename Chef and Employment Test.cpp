#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),cmpfunc);
	printf("%d\n",arr[(n+k)/2]);
}
}
