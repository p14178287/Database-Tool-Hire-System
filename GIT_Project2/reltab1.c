#include <stdio.h>

int main()
{
    int i, j;
         
    printf("enter value for i: ");	
    scanf("%i", &i);
    
    printf("enter value for j: ");	
    scanf("%i", &j);
    
   
    printf("%i < %i is %i\n", i,j,i<j);
    
    printf("%i > %i is %i\n", i,j,i>j);

    printf("%i <= %i is %i\n", i,j,i<=j);
    printf("%i >= %i is %i\n", i,j,i>=j);
    printf("%i == %i is %i\n", i,j,i==j);
    printf("%i != %i is %i\n", i,j,i!=j);
    
    return 0;
}
