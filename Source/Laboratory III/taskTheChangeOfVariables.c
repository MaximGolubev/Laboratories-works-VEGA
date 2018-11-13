#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 0, b = 0;
	
	system("clear");
	printf("\nPlease enter the 2 int variables: ");
	
	scanf("%i %i", &a, &b);
	
	printf("\na = %i | b = %i", a, b);
	
	a = a + b;
	b = a - b;
	a = a - b;
 
	printf("\na = %i | b = %i\n\n", a, b);
	return 0;
}
