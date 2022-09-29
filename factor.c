#include "header.h"
/**
 * factor - function to print a factor
 *
 * Return: factor
 */

int factor(unsigned int r)
{
	if (r == 0)
		return (1);

	return (r + factor(r + 1));
}
