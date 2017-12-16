#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int hash[11]={0};
		int size,i,j,index;
		int boolean=0;
		scanf("%d",&size);
		int arr[size];
		for(i=0;i<size;i++)
		{
		scanf("%d",&arr[i]);
		hash[arr[i]]++;
		if(arr[i]>7)
		boolean=1;
     	}
     	if(boolean==1)
     	{
     		printf("no\n");
     		continue;
		}
     	for(i=1;i<8;i++)
     	{
     		if(hash[i]!=0)
     	     continue;
     	    else
     	    {
     	    	boolean=1;
     	    	break;
			 }
		 }
		if(boolean==1)
     	{
     		printf("no\n");
     		continue;
		}
		for(int i=0;i<size/2;i++)
		{
			if(arr[i]==arr[size-i-1]&&(arr[i+1]==arr[i]||arr[i+1]-arr[i]==1))
			continue;
			else
			{
			 boolean=1;
			 break;
		    }
		}
		if(boolean==1)
	    {
	    	printf("no\n");
		}
		else
		printf("yes\n");
	}
}

