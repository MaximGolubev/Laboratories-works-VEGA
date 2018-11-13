#include <stdio.h>

void sortArray(short* array, short size) {
	
	for (short i = size - 1; i > 0; i--) {
	
        for (short k = 0; k < i; k++) {
        
            if (array[k] > array[k + 1]) {
                
                short tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;
            }
        }
    }
}

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
	
	sortArray(array, arraySize);
	
	printf("\nsorted:");
	
	for (short i = 0; i < arraySize; i++)
		printf("  %i", array[i]);
	
	printf("\n\n");
	
    return 0;
}
