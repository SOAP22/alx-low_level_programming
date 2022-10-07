#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate string
*@s1: first string
*@s2: second string
*@n: number of caracter to copy
* Return: pointer to the address of the memory block
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *snc;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0, k;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
			len1++;
		}
	}
	else
	{
		len1 = 0;
	}

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			j++;
			len2++;
		}
	}
	else
	{
		len2 = 0;
	}

	i = 0;
	j = 0;
	k = 0;

	if (n < len2 && s2 != NULL)
	{
		snc = malloc(sizeof(char) * (len1 + n + 1));
		if (snc == NULL)
			return (NULL);
		else
			while (i < (len1 + n ))
			{
				if (i < len1)
				{
					snc[i] = s1[j];
					j++;
				}
				else
				{
					snc[i] = s2[k];
					k++;
				}
				i++;
			}
	}
	if (n >= len2 && s2 != NULL)
	{
		snc = malloc(sizeof(char) * (len1 + len2 + 1));
		if (snc == NULL)
			return (NULL);
		else
			while (i < (len1 + len2))
			{
				if (i < len1)
				{
					snc[i] = s1[j];
					j++;
				}
				else
				{
					snc[i] = s2[k];
					k++;
				}
				i++;
                	}
	}
	if (s2 == NULL && s1 != NULL)
	{
		snc = malloc(sizeof(char) * (len1 + 1));
		if (snc == NULL)
			return (NULL);
		else
			while (i < len1)
			{
				if (i < len1)
				{
					snc[i] = s1[j];
					j++;
				}
				i++;
			}
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	return (snc);
}
