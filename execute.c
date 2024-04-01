#include "shell.h"

void shell_command(char **args) {
	pid_t CDPR = fork();

	/* Child process */
	
	if (CDPR == 0) {
	
		if (execve(args[0], args, NULL) == -1) {
			perror("execve");
			exit(EXIT_FAILURE);
		}
	} else if (CDPR < 0) {
		perror("fork");
		exit(EXIT_FAILURE);
	} else {
		wait(NULL);
		/* Parent process waiting for child */
	}

}