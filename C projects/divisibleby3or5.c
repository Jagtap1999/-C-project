#include<stdio.h>
main()
{
	int i,n;
	printf("\n enter n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%3==0 || i%5==0)
	{
		printf("\n%d",i);
	}
}
