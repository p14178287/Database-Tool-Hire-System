#include <stdio.h>

int main()
{
    int i, j, k;
         
    printf("enter value for i: ");	
    scanf("%i", &i);
    
    printf("enter value for j: ");	
    scanf("%i", &j);
    
    printf("enter value k: ");
    scanf("%i",&k);
    
    
    printf("i = %i\n", i);
    printf("j = %i\n", j);
    printf("k = %i\n", k);
    printf("i+j*k = %i\n", (i+j)*k);
    printf("i+k = %i\n", i+k);
    return 0;
}
