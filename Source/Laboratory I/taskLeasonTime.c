#include <stdio.h>

int main(int argc, char* argv[])
{
	
	short lessonNumber = 0;
	
	system("clear");
	printf("\nPlease enter the leason number: ");
	scanf("%d", &lessonNumber);
	
	switch (lessonNumber) {
		
		case 1:
			printf("The 1 lesson start at 9:00 end at 10:30");
			break;
		
		case 2:
			printf("The 2 lesson start at 10:40 end at 12:10");
			break;
		
		case 3:
			printf("The 3 lesson start at 13:00 end at 14:30");
			break;
		
		case 4:
			printf("The 4 lesson start at 14:40 end at 16:10");
			break;
		
		case 5:
			printf("The 5 lesson start at 16:20 end at 17:50");
			break;
		
		case 6:
			printf("The 6 lesson start at 18:00 end at 19:30"); 
			break;
		
		case 7:
			printf("The 7 lesson start at 19:40 end at 21:10"); 
			break;
		
		default:
			printf("Invalid value. Please enter a value from 1 to 7."); 
			break;
	}
	
	printf("\n\n");
 
	return 0;
}
