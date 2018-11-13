#include <stdio.h>

int main(int argc, char* argv[])
{
	short endInterval = 1;
	
	system("clear");
	printf("Please enter the end of the interval: ");
	scanf("%d", &endInterval);
	printf("\nThe Prime numbers:\n");
	
	short temp = 0;
	
	if (endInterval < 0) {
		printf("- Error! The interval is less than zero. The program closes.\n\n");
		return 0;
	}
	
	for (int i = 1; i <= endInterval; i++) {
		
		for (int k = 1; k <= i; k++) {
			
			if (i % k != 0)
				continue;
			
			temp++;
		}
		
		if (temp < 3)
			printf("%d\n", i);
		
		temp = 0;
	}
 
   return 0;
}
