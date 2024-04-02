#include "shell.h"

char* search_path(char *filename)
{
	extern char **environ;
	char **env = environ;
	char *path_env;
	char *path_copy;
	char *token;
	char *full_path;
	size_t dir_len;
	size_t file_len;

    /* Get the PATH value */
    for (; *env != NULL; env++)
    {
		if (strncmp(*env, "PATH=", 5) == 0)
		{
			path_env = *env + 5;
			path_copy = strdup(path_env);

			if (path_copy == NULL)
			{
				perror("Failed to allocate memory\n");
				free(path_copy);
			}
		}
    }

    /* Tokenize the PATH and search each directory */
	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		dir_len = strlen(token);
		file_len = strlen(filename);

		full_path = malloc(dir_len + 1 + file_len + 1);

		if (full_path == NULL)
		{
			perror("Failed to allocate memory\n");
			free(path_copy);
		}

		strcpy(full_path, token);
		strcat(full_path, "/");
		strcat(full_path, filename);

		if (access(full_path, F_OK) == 0)
		{
			return (full_path);
			free(full_path);
			free(path_copy);
		}

		free(full_path);
		token = strtok(NULL, ":");
	}

    /* Free allocated memory for the PATH copy*/
	return (NULL);
	perror("File not found in the PATH\n");
}
