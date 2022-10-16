#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * itob - converts to binary
 * @list: list to convert
 * Return: a string
 */
char *itob(va_list list)
{
	unsigned int iArg, iArgTest;
	int counter, i;
	char *result;

	iArg = va_arg(list, unsigned int);
	iArgTest = iArg;
	counter = 0;
	while (iArgTest != 0)
	{
		iArgTest /= 2;
		counter++;
	}
	result = malloc(sizeof(char) * (counter + 1));
	if (result == NULL)
		return (NULL);
	iArgTest = iArg;
	for (i = counter - 1; i >= 0; i--)
	{
		result[i] = ((iArgTest % 2) + '0');
		iArgTest /= 2;
	}
	result[counter] = '\0';
	return (result);

}
