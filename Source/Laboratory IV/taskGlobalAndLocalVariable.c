#include <stdio.h>

int thisIsGlobalVariable = 55;
char thisIsGlobalChar;

int main(int argc, char* argv[])
{
	int thisIsLocalVariableInTestFunction = 0;
	char thisIsLocalChar;
	
	system("clear");
	printf("\n\nThe variable \"thisIsGlobalVariable\" located at %p\nThe variable \"thisIsLocalVariableInTestFunction\" located at %p\nThe variable \"thisIsGlobalChar\" located at %p\nThe variable \"thisIsLocalChar\" located at %p\n\n", &thisIsGlobalVariable, &thisIsLocalVariableInTestFunction, &thisIsGlobalChar, &thisIsLocalChar);
	
    return 0;
}
