#include<stdio.h>


main()
{
	int i=1, n;
	printf("Enter value n = ");
	scanf("%d",&n);
	
	while(i<=10){
		printf("%d ",n);
		printf("* %d", i);
		printf("= %d\n", n*i);
		i++;
	}
}
