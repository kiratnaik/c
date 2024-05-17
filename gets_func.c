#include<stdio.h>

int main()
{

	char ch[3];
	printf("Enter string\n");

// gets(ch); will create overflow if more characters entered than string variable's size.
	fgets(ch, 3, stdin);
	printf("Entered string is \"%s\"\n",ch);
	return 0;
}
