/*Reading input by calling get char()*/
#include <stdio.h>

main()
{
	int ch1, ch2;

	printf("Please enter two characters together:\n");
	ch1 = getc( stdin );
	ch2 = getchar( );
	printf("The characters you entered are: %c%s%c\n", ch1," and ", ch2);
	return 0;
}
