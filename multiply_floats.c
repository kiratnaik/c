#include<stdio.h>

float multiply(float a, float b);
int main(void)
{

	float a, b, result;
	printf("Enter the first float #:\n");
	scanf("%f", &a);
	printf("Enter the second float #:\n");
	scanf("%f", &b);
	result = multiply(a, b);
	printf("Result is : %f\n", result);
}

float multiply(float a, float b)
{
	return a * b;
}

