#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int N,A;
		scanf("%d%d",&N,&A);
		if(A>=N)
		{
			printf("1 ");
			for(int i=0;i<N;i++)
			{
				printf("%c",97+i);
			}
			printf("\n");
			continue;
		}
		else if(A==1)
		{
			printf("%d ",N);
			for(int i=0;i<N;i++)
			printf("a");
			printf("\n");
		}
		else if(A==2)
		{
			if(N==1)
			printf("1 a\n");
			else if(N==2)
			printf("1 ab\n");
			else if(N==3)
			printf("2 aab\n");
			else if(N==4)
			printf("2 aabb\n");
			else if(N==5)
			printf("3 aaabb\n");
			else if(N==6)
			printf("3 aaabbb\n");
			else if(N==7)
			printf("3 aaababb\n");
			else if(N==8)
			printf("3 aaababbb\n");
			else
			{
				printf("4 ");
				char str[6]={'a','a','b','b','a','b'};
				int k=0;
				for(int i=0;i<N;i++)
				{
					printf("%c",str[k]);
					k++;
					if(k==6)
					k=0;
				}
				printf("\n");

			}
		}
		else
		{
			int q=N/A;
			printf("1 ");

			for(int i=0,k=0;i<N;i++)
			{
				printf("%c",97+k);
				k++;
				if (k==A)
					k=0;
			}
			printf("\n");


		}
		}
}
