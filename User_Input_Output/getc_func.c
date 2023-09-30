/*Reading input by calling getc()*/
#include <stdio.h>

main()
{
	int ch;
	
	printf("Please type in one character:\n");
	ch = getc( stdin );
	printf("The character you just entered is: %c\n", ch);
	return 0;
}
