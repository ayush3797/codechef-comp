#include<stdio.h>
#include<math.h>
int main()
{
		int test;
		scanf("%d",&test);
		while(test-->0)
		{
		long long int y;
		scanf("%lld",&y);
		int i;
		long long int total=0;
		for(i=1;i<=700;i++)
		{
			long long int diff=y-i;
			if(diff>0)
			{
				total+=(long long int)(sqrt(diff));
			}
		}
		printf("%lld\n",total);
	}
}
