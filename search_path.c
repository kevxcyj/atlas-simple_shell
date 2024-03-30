#include "shell.h"

void search_path()
{
	extern char **environ;
	char **env = environ;
	char *path_env;
	char *path_copy;

    /* Get the PATH value */
    for (; *env != NULL; env++)
    {
		if (strncmp(*env, "PATH=", 5) == 0)
		{
			path_env = *env + 5;
			path_copy = strdup(path_env);

			if (path_copy == NULL)
			{
				perror("PATH not found");
			}
			else
			{
				printf("%s", path_copy);
			}
		}
    }

    /* Tokenize the PATH and search each directory */

	

    /* Free allocated memory for the PATH copy*/

	free(path_copy);
}
