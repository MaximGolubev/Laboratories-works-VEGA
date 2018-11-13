#include <stdio.h>

int main(int argc, char* argv[])
{
	short day = 0;
	
	system("clear");
	printf("Hey. This is a test program that displays the day of the week.\nPlease enter the day of the week as a number:\n\n");
	scanf("%d", &day);
	
	switch (day) {
		
		case 1:
			printf("It's Monday");
		break;
		
		case 2:
			printf("It's Tuesday");
		break;
		
		case 3:
			printf("It's Wednesday");
		break;
		
		case 4:
			printf("It's Thursday");
		break;
		
		case 5:
			printf("It's Friday");
		break;
		
		case 6:
			printf("It's Saturday"); 
		break;
		
		default:
			printf("It's Sunday or unknown day"); 
		break;
	}
	
	printf("\n\n");
 
	return 0;
}
