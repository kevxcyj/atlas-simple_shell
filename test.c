#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
/* Can go in header file */

int shell_command(char *comm)
pid_t Par, chil;
int 

pid_t CDPR = fork();
/* child process */
if (CDPR == 0) {
    char *argv[] = {parameter, NULL};
    /* Parameter should be whatever the pointer name for the main function */
    if (execve(parameter, argv, NULL) == -1) {
        perror("execve");
        exit(EXIT_FAILURE);
    }
} else if (CDPR < 0) {
    perror("fork");
    exit(EXIT_FAILURE);
} else {
    wait(NULL);
}

free(parameter);
return 0;
