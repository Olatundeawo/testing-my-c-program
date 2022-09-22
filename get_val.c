#include"header.h"
/**
 * _strcat - function to get a value
 *
 * @src: a character
 * @dest: first character
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	dest = "This is first character";
	src = "This is last character";

	printf("First character:%s\n", dest);

	printf("Last character:%s\n", src);
}
