#include<stdio.h>

int main(void)
{
	int a;
	printf("Enter integer value\n");
	scanf("%d", &a);
	
	if (a % 2 == 0)
	{
		printf("Entered value is Even\n");
	}
	else
	{
		printf("Entered value is Odd.\n");
	}
	
	return 0;
}
