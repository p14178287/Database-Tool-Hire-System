#include <stdio.h>

int main()
{
    char i, j;
         
    printf("enter value for i: ");	
    scanf(" %c", &i);
    
    printf("enter value for j: ");	
    scanf(" %c", &j);
    
   
    printf("%c < %c is %c\n", i,j,i<j);
    
    printf("%i > %i is %i\n", i,j,i>j);

    printf("%i <= %i is %i\n", i,j,i<=j);
    printf("%i >= %i is %i\n", i,j,i>=j);
    printf("%i == %i is %i\n", i,j,i==j);
    printf("%i != %i is %i\n", i,j,i!=j);
    
    return 0;
}
