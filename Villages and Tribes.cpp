#include<stdio.h>
#include<string.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases-->0)
	{
		char str[100002];
		char dump;
		scanf("%c",&dump);
		scanf("%[^\n]s",str);
		int len=strlen(str);
		char back='C';
		int count_A=0;
		int count_B=0;
		int waiting=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]=='A')
			{
				count_A++;
				if(back==str[i])
				{
					count_A+=waiting;
				}
				back=str[i];
				waiting=0;
			}
			else if(str[i]=='B')
			{
				count_B++;
				if(back==str[i])
				{
					count_B+=waiting;
				}
				back=str[i];
				waiting=0;
			}
			else
			{
			  waiting++;
			}
		}
		printf("%d %d\n",count_A,count_B);
}
}
