#include <stdio.h>
int main ()
{
int f,i,a,t;
printf("\nenter initial value: ");
scanf("%i", &i);
printf("enter acceleration value: ");
scanf("%i", &a);
printf("enter time value: ");
scanf("%i", &t);
printf("Final speed is: %i\n\n",i+a*t);
return 0;
}
