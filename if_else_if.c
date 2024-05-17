#include<stdio.h>

int main(void)
{

	int marks;
	printf("Enter obtained marks out of 100 to check your grade\n");
	scanf("%d", &marks);
	
	if(marks <= 100 && marks >= 90)
		printf("A grade\n");
	else if(marks < 90 && marks >= 80)
		printf("B grade\n");
	else if(marks < 80 && marks >= 70)
		printf("C grade\n");
	else if(marks < 70 && marks >= 60)
		printf("D grade\n");
	else if(marks < 60 && marks >= 50)
		printf("D grade\n");
	else if(marks < 50 && marks >= 40)
		printf("D grade\n");
	else if(marks < 40 && marks >= 30)
		printf("E grade\n");
	else
		printf("fail bro\n");
	
	return 0;
}
