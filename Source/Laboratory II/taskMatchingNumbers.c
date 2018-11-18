#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    system("clear");

    bool digits[10];
	memset(digits, 0, sizeof(bool) * 10);

	int number = 0;

    printf("\nPlease enter the number: ");
    scanf("%i", &number);

    while (number) {
		int digit = number % 10;
		if (digits[digit] == true) {
			printf("\nThe number has the same digits\n");
			return 0;
		}
		else {
			digits[digit] = true;
		}
		number /= 10;
    }

    printf("\nNo digits are the same\n\n");

	return 0;
}
