#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int input_int;
    double input_double;
    char input_string[78];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &input_int);
    scanf("%lf\n", &input_double);
   // scanf("%[^\n]%*c", &input_string);
    
    scanf("%[^\n]s", input_string);
//    fgets(input_string, 70, stdin);

    
    // Print the sum of both integer variables on a new line.
     printf("%d \n",i + input_int);
     
    // Print the sum of the double variables on a new line.
        printf("%.1lf \n",d + input_double);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
        //strcat(s, input_string);
        printf("%s",s);
        printf("%s\n",input_string);
        

    return 0;
}
