#include<stdio.h>
int main()
{
	int x,s,i,n[5];
	printf("Value of x");
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
		n[i]=x;
		x= x*3;	
	}
	for(i = 0; i < 5; i++)
	{
		printf("n[%d] = %d\n", i, n[i]);
	}
	return 0;
}
