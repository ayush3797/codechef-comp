#include<stdio.h>
int find(int gr,int sm,int count)
{
    gr=gr/2;
    if(sm==gr)
    {
    count++;
    return count;
    }
    else if(sm>gr)
    {
    count++;
    find(sm,gr,count);
    }
    else
    {
        count++;
       find(gr,sm,count);
    }
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
		int i,j,gr,sm;
		scanf("%d %d",&i,&j);
		if(i>j)
		{
		gr=i;
		sm=j;
		}
		else if(i<j)
		{
		gr=j;
		sm=i;
	    }
	    else
	    {
	        printf("0\n");
	        continue;
	    }
		int q=find(gr,sm,0);
		printf("%d\n",q);
	}
}
