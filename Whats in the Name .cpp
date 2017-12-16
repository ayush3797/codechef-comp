#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test-->0)
	{
	//char str[]="Mohandas karamchand gandhi";
	char str[100];
	char dump;
	scanf("%c",&dump);
	scanf("%[^\n]s",str);
	int i=0,count=0;
	int arr[strlen(str)];
	//arr[0]=0;
	while(i<strlen(str))
	{
	if(str[i]==32)
	{
	arr[count]=i;
	count++;
    }
    i++;
    }
    if(str[0]<=122&&str[0]>=97)
    str[0]-=32;
    if(count==0)
    {
        int j=1;
        while(j<strlen(str))
        {if(str[j]>=65&&str[j]<=90)
        str[j]+=32;
        j++;
        }
        printf("%s",str);
    }
    else
    {
    	str[1]='.';
    	printf("%c%c",str[0],str[1]);
    for(i=0;i<count-1;i++)
      {
    	str[arr[i]+2]='.';
    	if(str[arr[i]+1]>=97&&str[arr[i]+1]<=122)
    	str[arr[i]+1]=str[arr[i]+1]-32;
    	printf(" %c%c",str[arr[i]+1],str[arr[i]+2]);
	  }
	  for(i=arr[count-1];i<strlen(str);i++)
	  {
        if(str[i]>=65&&str[i]<=90)
        str[i]+=32;
        if(str[arr[count-1]+1]<=122&&str[arr[count-1]+1]>=97)
        str[arr[count-1]+1]-=32;
	    printf("%c",str[i]);
    }
}
printf("\n");
}
return 0;
}
