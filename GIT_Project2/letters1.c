#include <stdio.h>
int main ()
{
	char value;
	
	/*this program was done using Ali's brains*/
	
	printf("\n\nEnter letter: ");
	scanf("%c", &value);
	
	if ((value=='a') || (value=='e') ||(value=='i') ||(value=='o') ||(value=='a'))	
	{
		printf("Vowel\n");
	}
			
	else if ((value=='b') || (value=='c') || (value=='d') || (value=='f')) 
	{
		printf("Costonant\n\n");
	}
	else
	{
		printf("not a letter\n");
	}
	return 0;
}	
