#include<stdio.h>

int main(void)
{

	int arr[5] = {23,22, 43, 54, 34};
	printf("Element of 3rd index is : %d\n", arr[3]);
	printf("Element of 2nd index is : %d\n", arr[2]);
	printf("Element of 4th index is : %d\n", arr[4]);
	
	arr[4] = 20; // updating an array element.
	printf("Element of 4th index is : %d\n", arr[4]); // printing updated value.
	
	// traversing array using loop.
	printf("Elements of the array are :");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;	

}
