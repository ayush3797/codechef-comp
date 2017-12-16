#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int count=0;
	while(n-->0)
	{
		int num;
		scanf("%d",&num);
		if(num%k==0)
		count++;
	}
	printf("%d",count);
}
