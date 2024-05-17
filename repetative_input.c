// To take repeatative input from stdin/user
// This program will take user input untill user enters an odd number.
#include<stdio.h>

int main()
{
	int n;
	do
	{
		scanf("%d", &n);
		if(n % 2 == 0)
		{
		printf("%d\n", n);
		}
		else
		break;// whenever it breaks, it returns control back to the main function. Will go out of both do and while.
	}
	while(1);

}
