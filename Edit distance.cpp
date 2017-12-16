#include<stdio.h>
int min(int a,int b,int c,int i,int j)
{
	int MAX;
 printf("YES%d%d ",i,j);
	if(a<b&&a<c)
	MAX= a;
	else if(b<c)
	MAX= b;
	else
	MAX= c;
	printf("returned-%d\n",MAX);
	return MAX;
}
int main()
{
	int n; //size of string1
	int m; //size of string 2
	//string 1 is to be converted into string 2
	scanf("%d %d",&n,&m);
	char str1[n];
	char str2[m];
	char dum;
	scanf("%c",&dum);
	for(int i=0;i<n;i++)
	scanf("%c",&str1[i]);
//	for(int i=0;i<n;i++)
//	printf("%c",str1[i]);
	char dump;
	scanf("%c",&dump);
	for(int i=0;i<m;i++)
	scanf("%c",&str2[i]);
	int arr[n+1][m+1];
//	printf("%s %s\n",str1,str2);
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			if(i==0)
			arr[i][j]=j;
			else if(j==0)
			arr[i][0]=i;
			else if(str1[i-1]==str2[j-1])
			arr[i][j]=arr[i-1][j-1];
			else
			arr[i][j]=min(arr[i-1][j-1],arr[i-1][j],arr[i][j-1],i,j)+1;
		}
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
}
