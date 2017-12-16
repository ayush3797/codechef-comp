#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int N,M;
		scanf("%d %d",&N,&M);
		int minSa[N+1],com=0;
		int count[M+1];
		long int sum=0;
		for(int i=1;i<N+1;i++)
		scanf("%d",&minSa[i]);
		int offSa[M+1];
		int mJobof[M+1],temp;
		for(int i=1;i<M+1;i++)
		{
		   count[i]=0;
		scanf("%d %d",&offSa[i],&mJobof[i]);
		}
		char qual[N+1][M+1];
		int index;
		char dump;
		int emps=0;
		for(int i=1;i<N+1;i++)
		{
			scanf("%c",&dump);
		scanf("%[^\n]s",qual[i]);
		}
		for(int i=1;i<N+1;i++)
		{
			temp=minSa[i];
			index=0;
			for(int j=1;j<M+1;j++)
			{
				if(qual[i][j-1]-48==1)
				{
					if(offSa[j]>=temp&&count[j]<mJobof[j])
					{
					temp=offSa[j];
					index=j;
			     	}
				}
			}
			if(index!=0&&temp>=minSa[i]&&count[index]<mJobof[index])
		 	 {
		 		if(count[index]==0)
		 		com++;
			 	count[index]++;
			 	sum+=temp;
			 	emps++;
		     }
		  }
		  printf("%d %ld %d\n",emps,sum,M-com);
	}
}

