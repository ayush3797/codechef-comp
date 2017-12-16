#include<stdio.h>
long int call(long int *arr,int i,int D,int num)
{
	long int count=0;
	if((arr[i]+arr[i+D])/2==num&&(arr[i]+arr[i+D])%2==0)
	{
		if(arr[i]>arr[i+D])
		count+=arr[i]-num;
		else
		count+=arr[i+D]-num;
		arr[i]=num;
		arr[i+D]=num;
		return count;
	}
	if(arr[i]!=num)
		{
			if(arr[i]>num)
			{
				count+=arr[i]-num;
				arr[i+D]+=count;
				arr[i]=num;
				return count;
			}
			else
			{
				count+=num-arr[i];
				arr[i+D]-=count;
				arr[i]=num;
				return count;
			}
       }
if(arr[i]==num)
return 0;
}
int main()
{
    //printf("Called");
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int N,D,num;
		long int eff=0,count;
		long int sum=0;
		scanf("%d %d",&N,&D);
		long int arr[N];
		for(int i=0;i<N;i++)
		{
			scanf("%ld",&arr[i]);
			sum+=arr[i];
		}
		if(sum%N==0)
		num=sum/N;
		else
		{
			printf("-1\n");
			continue;
		}
		for(int i=0;i<N-D;i++)
		{
		count=call(arr,i,D,num);
		eff+=count;
		}
		int flag=0;
		for(int i=0;i<N;i++)
		{
			if(arr[i]!=num)
			{
				printf("-1\n");
				flag=1;
				break;
			}
		}
		if(flag!=1)
		printf("%ld\n",eff);
	}
}
