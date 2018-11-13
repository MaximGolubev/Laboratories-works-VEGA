#include <stdio.h>

int main(int argc, char* argv[])
{
    system("clear");
    
    char str[128];
    
    printf("\nPlease enter the number: ");
    scanf("%s", str);

    
    for (int i = 0; i < sizeof(str) / sizeof(char); i++) {
        
        switch (str[i]) {
            
            case '0':
            str[i] = 'q';
            break;
            
            case '1':
            str[i] = 'w';
            break;
            
            case '2':
            str[i] = 'e';
            break;
            
            case '3':
            str[i] = 'r';
            break;
            
            case '4':
            str[i] = 't';
            break;
            
            case '5':
            str[i] = 'y';
            break;
            
            case '6':
            str[i] = 'u';
            break;
            
            case '7':
            str[i] = 'i';
            break;
            
            case '8':
            str[i] = 'o';
            break;
            
            case '9':
            str[i] = 'p';
            break;
            
            default:
            break;
        }
    }
    
    printf("\nNew string: %s\n\n", str);
    return 0;
}
