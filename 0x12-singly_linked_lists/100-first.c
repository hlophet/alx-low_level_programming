#include <stdio.h>

void printfirst(void) __attribute__ ((constructor));
/**
 * printfirst - prints the two senteces before main
 *              function
 */
void printfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
