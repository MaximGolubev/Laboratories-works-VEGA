#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

void printArray(int* array, int arraySize) {
    
    printf("\nArray(%d): \n", arraySize);
    
    for (int i = 0; i < arraySize; i++)
        printf("  %2d", array[i]);
}

int getIndexSmallestElement(int* array, int arraySize) {
	
	int min = array[0];
	int index = 0;
	
	for (int i = 0; i < arraySize; i++) {
		
		if (array[i] < min) {
		    
		    min = array[i];
		    index = i;
		}
	}
	
	return index;
}

int getIndexLargestElement(int* array, int arraySize) {
	
	int max = array[arraySize - 1];
	int index = arraySize - 1;
	
	for (int i = arraySize - 1; i > 0; i--) {
		
		if (array[i] > max) {
		    
		    max = array[i];
		    index = i;
		}
	}
	
	return index;
}

void cyclicShift(int* array, int arraySize, int maxIndex, int minIndex) {
    
    bool rightSide = false;
    int count = 0;

    if (minIndex < maxIndex)
        rightSide = true;
        
    if (rightSide) {
        
        count = maxIndex;
        printf("\n\nThe shift to %i →\n", count);
    }
    else {
        
        count = minIndex;   
        printf("\n\nThe shift to ← %i\n", count);
    }
        
    while(count != 0) {
        
        int temp = 0;
        
        if (!rightSide) {
            
            temp = array[arraySize - 1];
            
            for(int i = arraySize - 2; i >= 0; i--)
                array[i + 1] = array[i];
            
            array[0] = temp;
        } 
        else 
        {
            temp = array[0];
            
            for(int i = 0; i < arraySize - 1; i++)
                array[i] = array[i + 1];
            
            array[arraySize - 1] = temp;
        }
        count--;
    }
}

int main(int argc, char* argv[])
{
    system("clear");
    
    const int arraySize = 17;
    int array[arraySize];
    
    srand(time(NULL));
    
    for (int i = 0; i < arraySize; i++)
        array[i] = 1 + rand() % 99;
    
    printArray(array, arraySize);
    
    cyclicShift(array, arraySize, getIndexSmallestElement(array, arraySize), getIndexLargestElement(array, arraySize));
    
    printArray(array, arraySize);
    
    return 0;
}
