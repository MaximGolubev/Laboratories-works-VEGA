#include <stdio.h>

int main(int argc, char* argv[])
{
    int one = 0;
    float two = 0;
    char three;

    system("clear");
    printf("\nHi! Please write the variables: int, float and char:\n");
    
    scanf("%u", &one);
    scanf("%f", &two);
    scanf(" %c", &three);
    
    printf("\n\nYou wrote: one[int]: %u (%u bytes); two[float]: %.1f (%u bytes); three[char]: %c (%u byte)\n", one, sizeof(one), two, sizeof(two), three, sizeof(three));
    printf("Your variables occupy %u bytes of the RAM\n\n", sizeof(one) + sizeof(two) + sizeof(three));
 
	return 0;
}