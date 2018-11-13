#include <stdio.h>

int main(int argc, char* argv[])
{
	system("clear");
	
	for (int i = 2; i < 10; i++) {
		
		printf("\n");
		
		for(int k = 1; k < 10; k++)
			printf("%i * %i = %i\n", i, k, i * k);
	}
	
	printf("\n\n");
	return 0;
}
