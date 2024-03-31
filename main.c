#include "shell.h"
/**
 * main - Checks to see if shell is called
 * 
 * Return: 0 
*/

int main(void)
{

 if (isatty(STDIN_FILENO) == 1)
 {
  intermode();
 }
 else
 {
  nonintermode();
 }
 return (0);
}