#include <stdio.h>

void printArray(int* array, int arraySize) {
    
    printf("\nArray[%d]: \n", arraySize);
    
    for (int i = 0; i < arraySize; i++) {
        
        if (i % 5 == 0 && i != 0)
            printf("\n");
        printf("  %2d", array[i]);
    }
}

void removeValue(int *array, int *arraySize, int position) {
    
    printf("\ndelete position %2d value %2d", position, array[position]);
    
    for(int i = position; i < arraySize - 1; i++) array[i] = array[i + 1];
    //*arraySize = 24;
}

void removeThreeAndMoreRepeatValue(int *array, int *arraySize) {
    
    int repeat = 0;
    
    for (int i = 0; i < arraySize; i++) {
        
        for (int j = i + 1; j < arraySize; j++) {
            
            if (array[i] == array[j]) {
                
                if (repeat == 0) {
                    
                    repeat = j;
                    continue;
                }
                
                removeValue(array, arraySize, i);
                removeValue(array, arraySize, repeat);
                removeValue(array, arraySize, j);
            }
        }

        repeat = 0;
    }
}

int main(int argc, char* argv[])
{
	system("clear");
	
    int arraySize = 25;
    int array[arraySize];
    
    for (int i = 0; i < arraySize; i++)
        array[i] = 1 + rand() % 20;
    
    printArray(array, arraySize);
    removeThreeAndMoreRepeatValue(array, arraySize);
    printArray(array, arraySize);
}
