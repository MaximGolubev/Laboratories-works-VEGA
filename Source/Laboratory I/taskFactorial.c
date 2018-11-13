#include <stdio.h>

int main(int argc, char* argv[])
{
	
	short factorial = 0;
	int result = 1;
	
	system("clear");
	printf("\nPlease enter the factorial:\n\n");
	scanf("%d", &factorial);
	
	if (factorial < 0) {
		printf("- Error! The factorial is less than zero. The program closes.\n\n");
		return 0;
	}
	
	for(int i = 1; i <= factorial; i++)
		result = result * i;
	
	printf("Factorial %d = %d\n\n", factorial, result);
 
	return 0;
}
