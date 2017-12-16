#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		 int P,N;
		scanf("%d %d",&P,&N);
		char str[N];
		if(N==1||N==2)
		{
			printf("impossible\n");
			continue;
		}
		else
		{
			char str[N];
			if(N%2==0)
			{
				str[N/2-1]='a';
				str[N/2]='a';
			}
			else
			{
				str[N/2]='a';
			}
			int q=P/N;
			while(q-->0)
			{
		     for(int i=0;i<N;i++)
		     {
		     	if(N%2==0&&(i==N/2-1||i==N/2))
		     	printf("b");
		     	else if(N%2!=0&&i==N/2)
		     	printf("b");
		     	else
		     	printf("a");
			 }
			}
			printf("\n");
		}
	}
}
