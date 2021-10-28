#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat -  Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	{
		if (n < b)
			s3 = malloc(sizeof(char) * (a + n + 1));
		else
			s3 = malloc(sizeof(char) * (a + b + 1));
	}
	if (s3 == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s3[c] = s1[c];
	if (n < b)
		for (d = 0; d < n; d++)
		s3[c + d] = s2[d];
	else
		for (d = 0; d < b; d++)
		s3[c + d] = s2[d];
	s3[c + d]  = '\0';
	return (s3);
	free(s3);
}
