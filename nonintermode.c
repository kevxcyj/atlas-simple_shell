#include "shell.h"
/**
 * nonintermode - Non interactive mode
 * 
 * Return: void
*/

void nonintermode()
{
 char *line;
 char **split;
 int input = -1;

 do {
  line = read_stream();
  split = split_line(line);
  /* Tokenize */
  input = /* function to execute commands? */ (split);
  /* Function to execute */
  free(line);
  free(split);
  /* Exit */
  if (input >= 0)
  {
   exit(input);
  }
 } while (input == -1);
}