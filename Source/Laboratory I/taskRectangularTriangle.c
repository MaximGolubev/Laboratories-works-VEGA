#include <stdio.h>

int main(int argc, char* argv[])
{
	short sides[3];
	short maxSide = 0;
	short sumOfSquares = 0;
	
	printf("\nPlease enter the sides of the triangle: ");
	scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
	
	if (sides[0] < 1 || sides[1] < 1 || sides[2] < 1) {
		
		printf("\nerror\n\n");
		return 0;
	}
	
	maxSide = sides[0];
	
	// Находим большую сторону треугольника
	for (int i = 0; i < 3; i++) {
		
		if (maxSide < sides[i])
			maxSide = sides[i];		
	}
	
	// Обнуляем большую сторону треугольника
	for (int i = 0; i < 3; i++) {
		
		if (maxSide == sides[i]) {
			
			sides[i] = 0;
			break;
		}			
	}
	
	// Находим сумму квадратов других сторон
	sumOfSquares = ((sides[0] * sides[0]) + (sides[1] * sides[1]) + (sides[2] * sides[2]));
	
	if ((maxSide * maxSide) == sumOfSquares)
		printf("\nThe triangle is rectangular\n\n");
	else
		printf("\nThe triangle is not rectangular\n\n");
 
	return 0;
}
