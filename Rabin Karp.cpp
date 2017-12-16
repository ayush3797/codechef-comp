//Rabin-Karp Algorithm
#include<stdio.h>
#include<string.h>
#include<math.h>
void compare(char str1[],char str2[],int hash,int search_hash,int i,int len2)
{
	int k=0;
	int j;
	int p;
	if(hash!=search_hash)
	return;
	else
	{
		for(int j=i;j<i+len2;j++)
		{
			if(str1[j]==str2[k])
			{
				k++;
				printf("%d ",j);
				p=j;
   				continue;
			}
			else
			break;
		}
		if(p==len2+i-1)
		printf("String found at index %d %d %d",len2,p,i);
		return;
	}
}
int main()
{
	char str1[]="cadecadcad";
	char str2[]="cad";
	int search_hash=0;
	int len1=strlen(str1);
	int len2=strlen(str2);
	printf("%d",len2);
	int prime=3;
	int val=1;
	int power=int(pow(prime,len2-1));
	for(int i=0;i<len2;i++)
	{
		
		search_hash=search_hash+(str2[i]-96)*val;
		val*=prime;
	}
	val=1;
	int hash=0;
	for(int j=0;j<len2;j++)
	{
		hash=hash+(str1[j]-96)*val;
		val*=prime;
	}
	int temp=hash;
	for(int i=0;i<len1-len2+1;i++)
	{
		if(i==0)
		{
			compare(str1,str2,hash,search_hash,i,len2);
			printf("\n%d--%d\n",i,hash);
		}
		else
		{
			hash=(temp-(str1[i-1]-96))/prime+(str1[i+len2-1]-96)*power;
			compare(str1,str2,hash,search_hash,i,len2);
			printf("\n%d--%d\n",i,hash);
		}
		temp=hash;
	}
}
