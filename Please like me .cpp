#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
	    int flag=0;
		long int L,D,S,C;
		scanf("%ld %ld %ld %ld",&L,&D,&S,&C);
		int days=0;
		while(days<D)
		{
		 if(S>=L)
		 {
		  flag=1;
	    	printf("ALIVE AND KICKING\n");
	    	break;
		}
		S+=S*C;
		days++;
		}
	    if(flag!=1)
	   printf("DEAD AND ROTTING\n");
	}
	return 0;
}
