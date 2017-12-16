#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float acbal;
	scanf("%d %f",&n,&acbal);
	float rem;
	if(n%5==0&&n<floor(acbal))
	{
		rem=acbal-n-0.5;
		printf("%0.2f\n",rem);
	}
	else
	printf("%0.2f\n",acbal);
	return 0;
}
