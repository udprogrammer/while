#include<stdio.h>

main()
{

    int i=1,n,sum;
	printf("Enter value of n = ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		sum = sum + i ;
		i++;
		
	}
	printf("SUM=%d",sum);
	
}  
