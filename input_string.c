#include<stdio.h>

int main(void)
{
	char string[123];
	printf("Enter full name\n");
	scanf("%[^\n]s", string); //Scans the user input from stdin until the user presses enter.
	printf("You entered \"%s\"\n",string);
	return 0;
}
