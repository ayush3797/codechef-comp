#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int arr[3];
		int sum=0,flag=0;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
		if(arr[i]==180)
		flag=1;
	}
	if(sum==180&&flag==0)
	printf("YES\n");
	else
	printf("NO\n");
}
}
