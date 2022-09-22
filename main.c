#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	char str1[] = "First character";
	char srt2[] = "Last character";

	printf("%s\n", str1);
	printf("%s\n", srt2);

	size_t length = strlen(str1);
	str1[length] = ' '; /*overwrite null termination*/
	str1[length + 1] = '\n'; /*add a new line */
	strcat(str1, srt2);

	printf("The contated string:%s\n", str1);
	return (0);
}
