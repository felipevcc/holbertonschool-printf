#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*_printf("Let's try to printf a simple sentence.\n");*/
	/*_printf("Length:[%%]\n");*/
	/*_printf("Length:[%%] and [%%]\n");*/
	/*_printf("Length:%s a\n", "hola");*/
	/*_printf("Character:[%c]\n", '\0');*/
	/*_printf("Percent:[%%]\n");*/
	/*_printf("hola %! gola a\n");*/

	/*int len, len2;

	len = _printf("%c", '\0');	
	len2 = printf("%c", '\0');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}	*/
	int len, len2;

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	/*printf("%");*/
	return (0);
}
