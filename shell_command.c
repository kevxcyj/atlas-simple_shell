#include "shell.h"

void shell_command(char **args) {
	pid_t CDPR = fork();
	char *path;

	path = search_path(args[0]);
	/* Child process */
	
	if (CDPR == 0) {
	
		if (execve(path, args, NULL) == -1) {
			perror("execve");
			free(path);
			exit(EXIT_FAILURE);
		}
	} else if (CDPR < 0) {
		perror("fork");
		free(path);
		exit(EXIT_FAILURE);
	} else {
		free(path);
		wait(NULL);
		/* Parent process waiting for child */
	}

}