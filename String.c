#include <shell.h>

char **split_strings(char *string)
{
	int size = 50;
	int i = 0;
	/* Current position in array */
	char **tokens = malloc(size * sizeof(char *));
	char *token;
	char *delim = " ";
	/* Delimiter searching for " " */

	if (!tokens)
	{
		printf(stderr, "ERROR\n");
		exit(EXIT_FAILURE);
	}
	token = strtok (*string, delim);
	while (token != NULL)
	{
		if (token[0] == ' ')
	{
		break;
	}
	tokens[i] = token;
	i++;
	if (i >= size)
	{
		size += size;
		tokens = realloc(tokens, size * sizeof(char*));
		/* Resizing for more memory */
		if (!tokens)
		{
			printf(stderr, "ERROR");
			exit(EXIT_FAILURE);
		}
	}
	token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);

}
