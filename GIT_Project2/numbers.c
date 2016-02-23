# include <stdio.h>
int main ()
{
int a, b, c;
printf("\n\tEnter first number: ");
scanf("%i", &a);

printf("\n\tEnter second number: ");
scanf("%i", &b);

printf("\n\tEnter third number: ");
scanf("%i", &c);

if ((a==b+c) || (b==a+c) || (c==b+a))
{
    printf("\n\tYES PAPA\n");
}
else
{
   printf("\n\tNO\n\n");
}
return 0;
}
