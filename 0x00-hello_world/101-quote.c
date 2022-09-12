#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char sms[] = "and that piece of art is useful\"";
	char msm[] = " - Dora Korpar, 2015-10-19\n";
	char message[60];

	sprintf(message, "%s%s", sms, msm);
	fwrite(message, 59, 1, stderr);
	return (1);
}
