#include "shell.h"

/**
 * main- main function of the shell
 *
 * Return: Always 0
*/

int main()
{
	if (isatty(STDIN_FILENO))
	{
		intermode();
	}
	else
	{
		nonintermode();
	}

	return (0);
}
