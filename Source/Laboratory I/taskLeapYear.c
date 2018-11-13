#include <stdio.h>

int main(int argc, char* argv[])
{
	short year = 0;
	
	printf("\nPlease enter the year: ");
	
	scanf("%d", &year);
	
	if (year < 1) {
		
		printf("\n- error\n\n");
		return 0;
	}
	
	if ((year % 4) == 0)
		printf("The year is leap\n\n");
	else
		printf("The year is not leap\n\n");
 
	return 0;
}
