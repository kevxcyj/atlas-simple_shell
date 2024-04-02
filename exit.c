#include "shell.h"

int exits()
{
    int check = 0;
    char *command;
    size_t size;

    getline(&command, &size, stdin);
    if(strcmp(command, "exit") == 0)
    {
        check = 1;
    }
    return (check);
}