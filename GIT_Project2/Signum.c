#include <stdio.h>
int main ()
{
	int a;
	/*this program was done using Ali's brians*/
	printf("\tEnter interger: ");
	scanf("%10i", &a);
	
	if (a<0)
	{
		printf("OUTPUT IS -1\n\n");
	}
			
	else
	if (a==0) 	
	{
		printf("OUTPUT IS 0\n\n");
	}
	else 
	{
		printf("OUTPUT IS 1\n");
	}	
	return 0;
}	
