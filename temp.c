#include<stdio.h>

int main()
{
	int marks[1][2];
	marks[0][0] = 34;
	marks[0][1] = 23;
	marks[0][2] = 14;
	marks[1][0] = 54;
	marks[1][1] = 64;
	marks[1][2] = 24;

	printf("%d\n", marks[1][0]);

}
