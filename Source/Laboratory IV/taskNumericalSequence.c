#include <stdio.h>

int main(int argc, char* argv[])
{
    system("clear");
	
	short arraySize = 0;
	
	printf("\nEnter the size of the array: ");
	scanf("%i", &arraySize);
	
	if (arraySize < 1) {
		printf("\nerror\n\n");
		return 1;
	}
	
	printf("\n");
	
	short array[arraySize];
	
	for (short i = 0; i < arraySize; i++) {
		printf("Please %i element array: ", i);
		scanf("%i", &array[i]);
	}
	
	for (short i = 0; i < arraySize - 1; i++) {
		
		if ((i % 2) == 0)
			array[i + 1] = array[i] - array[i + 1];
		else
			array[i + 1] = array[i] + array[i + 1];
	}
	
	printf("x1−x2+x3−…−xn−1+xn = %i", array[arraySize]);
	
    return 0;
}