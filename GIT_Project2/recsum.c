# include <stdio.h>
# define size [1,10]
int main ()
//recsum.c
int total=0;
 
main ()
{
	sum(1,10);
	printf("total = %i\n", total);
}	

int sum (int startNumber, int endNumber)
{
	if (startNumber <= endNumber)
	{
		total = total+startNumber;
		sum (startNumber + 1, endNumber);
	}
}

