#include "shell.h"

/**
 * @environ: global variable for the array of environment variable strings
*/

extern char **environ;

/**
 * env- prints all the environment variables contained in environ
*/
void env()
{
    int i;

    while (environ[i]) 
    {
        printf("%s\n", environ[i++]);
    }
}