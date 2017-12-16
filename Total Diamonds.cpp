#include<stdio.h>
long int val(long int temp)
{
	long int ans=0;
	while(temp>0)
	{

		long int num=temp%10;
		if(num%2==0)
		ans+=num;
		else
		ans-=num;
		temp=temp/10;
	}
	if(ans<0)
	ans*=-1;
	return ans;
}
int main()
{
	int test;
	scanf("%d",&test);
	long int arr[1000001];
	arr[0]=0;
	for(int i=1;i<1000001;i++)
	arr[i]=arr[i-1]-2*val(i)+val(2*i)+2*val(2*i-1)+val(2*i-2);
	for(int i=1;i<1000001;i++)
	{
		arr[i]+=arr[i-1];
		//printf("%d\t",arr[i]);
	}
// 	printf("%ld",arr[1000000]);
while(test-->0)
	{
	    long int n;
	    //printf("yes");
	    scanf("%ld",&n);
	    printf("%ld\n",arr[n]);
	}
}
