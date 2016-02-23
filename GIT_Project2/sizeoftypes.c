#include <stdio.h>
int main ()
{
int X1 = 44;
short T1 = 5;
char C1 = 'B';
int X2;
char C2;
long X3 = 12345;
printf("name\tvalue\tlocation\tsize\n");

printf("X1\t%i\t%i\t%i\n",X1,&X1,sizeof(X1));

printf("T1\t%i\t%i\t%i\n",T1,&T1,sizeof(T1));

printf("C1\t%c\t%i\t%i\n",C1,&C1,sizeof(C1));

printf("X2\t%i\t%i\t%i\n",X2,&X2,sizeof(X2));

printf("C2\t%i\t%i\t%i\n",C2,&C2,sizeof(C2));

printf("X3\t%i\t%i\t%i\n",X3,&X3,sizeof(X3));

return 0;
    
}
