#include "shell.h"

void shell_command(char **args) {
	pid_t CDPR = fork();
	char *path;

	path = search_path(args[0]);
	/* Child process */
	
	if (CDPR == 0) {
	
		if (execve(path, args, NULL) == -1) {
			perror("execve");
			exit(EXIT_FAILURE);
		}
	} else if (CDPR < 0) {
		perror("fork");
		exit(EXIT_FAILURE);
	} else {
		wait(NULL);
		free(path);
		/* Parent process waiting for child */
	}

}
