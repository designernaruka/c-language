#include <stdio.h>
#include<math.h>

/* Function declarations */
int max(int num1, int num2);
int min(int num1, int num2);



int main() 
{
    int num1, num2, maximum, minimum;
    
    /* Input two numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  // Call maximum function
    minimum = min(num1, num2);  // Call minimum function
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}