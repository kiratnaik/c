// Prints all odd numbers between 5 and 50;

#include<stdio.h>

int main()
{
	int n;
	for(n = 5; n<=50; n++)
	{
		if(n % 2 != 0)
		printf("%d\n", n);
	}
	return 0;
}
