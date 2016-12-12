#include <stdio.h>
 
int main(){
	char input;
	char output;
 
        printf("Enter a letter: ");
        scanf("%lc", &input);
 
        if(input >= 'a' && input <= 'z')
	{
        output = ('A' + input - 'a');
	printf("%c\n", output);
        }
        
	else if(input >= 'A' && input <= 'Z')
	{
        output = ('a' + input - 'A');
        printf("%c\n", output);
	}
 	
	else 
	{
	printf("That's not a letter! Try again next time.\n");
	return 0;
	}
        return 0;
	}	
