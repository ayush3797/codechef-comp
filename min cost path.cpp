//only right and down movements are allowed
#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
}
int main()
{
	int n;
	int m;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	scanf("%d",&arr[i][j]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0)
			{
				if(j>0)
				arr[i][j]+=arr[i][j-1];
			}
			else if(j==0)
			{
				if(i>0)
				arr[i][j]+=arr[i-1][j];
			}
			else
			{
				arr[i][j]=arr[i][j]+min(arr[i-1][j],arr[i][j-1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
}
