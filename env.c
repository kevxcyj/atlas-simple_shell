#include "shell.h"

void env(char **envp)
{
    int i = 0;
    char *command;
    size_t size;

    getline(&command, &size, stdin);   
    if (strcmp(command, "env") == 0)
    {
        while(envp[i])
        {
            printf("%s\n", envp[i++]); 
        }
    }
}