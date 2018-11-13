#include <stdio.h>

int main(int argc, char* argv[])
{
    system("clear");
    
    int number = 0;
    char buffer[10];
    
    printf("\nPlease enter the number: ");
    scanf("%i", &number);
    sprintf(buffer, "%i", number);
    
    for(int i = 0; i < 10; i++) {
        
        if (buffer[i] == '\0')
            break;
        
        for(int k = i+1; k < 10; k++) {
            
            if(buffer[i] == buffer[k]) {
                printf("\nThe number has the same numbers: %c = %c\n\n", buffer[i], buffer[k]);
                return 0;
            }
        }
    }
    
    printf("\nNo digits are the same\n\n");
    
	return 0;
}
