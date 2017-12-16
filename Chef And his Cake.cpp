#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int N;
		int M;
		scanf("%d %d",&N,&M);
		char arr[N][M];
		for(int i=0;i<N;i++)
		{
			char dump;
			scanf("%c",&dump);
		    for(int j=0;j<M;j++)
		    scanf("%c",&arr[i][j]);
		}
		long int val_1=0;
		long int val_2=0;
		for(int i=0;i<N;i++)
		{
		    for(int j=0;j<M;j++)
		    {
		        if(i%2==0)
		        {
		            if(j%2==0&&arr[i][j]=='G')
		            val_1+=3;
		            if(j%2==0&&arr[i][j]=='R')
		            val_2+=5;
		            if(j%2!=0&&arr[i][j]=='R')
		            val_1+=5;
		            if(j%2!=0&&arr[i][j]=='G')
		            val_2+=3;
		        }
		        else
		        {
		            if(j%2==0&&arr[i][j]=='R')
		            val_1+=5;
		            if(j%2==0&&arr[i][j]=='G')
		            val_2+=3;
		            if(j%2!=0&&arr[i][j]=='G')
		            val_1+=3;
		            if(j%2!=0&&arr[i][j]=='R')
		            val_2+=5;
		        }
		    }
		}
	if(val_1<val_2)
	printf("%ld\n",val_1);
	else
	printf("%ld\n",val_2);
}
}
