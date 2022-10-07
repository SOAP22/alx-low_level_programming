#include "main.h"
#include <stdlib.h>


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

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			j++;
			len2++;
		}
	}
	i = 0;
	j = 0;
	k = 0;

	if (n < len2)
	{
		snc = malloc(len1 + n + 1);
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
	if (n >= len2)
	{
		snc = malloc(len1 + len2 + 1);
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
	if (s2 == NULL)
	{
		snc = malloc(len1 + 1);
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
	return (snc);
}
