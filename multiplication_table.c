#include<stdio.h>

int main()
{
	float n;
	printf("Enter a # to get its table:\n");
	scanf("%f", &n);
	
	for(int i=1; i<=10; i++)
	{
		printf("%f\n", n*i);
	}


}
