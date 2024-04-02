#include "shell.h"

extern char **environ;

void env()
{
    int i;

    while (environ[i]) 
    {
        printf("%s\n", environ[i++]);
    }
}