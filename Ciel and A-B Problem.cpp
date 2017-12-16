#include<stdio.h>
int main()
{
	int n,m;//n=A,m=B
	scanf("%d %d",&n,&m);
	int d=n-m;
	if(d%10==0||d%10==1)
	printf("%d",d+1);
	else
	printf("%d",d-1);
}
