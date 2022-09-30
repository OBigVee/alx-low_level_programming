#include <stdio.h>

/**
  * main - code entry 
  * 
  * Return - 0 or 1
  */
int main(int argc, char *argv[])
{
	/*(void)argc;*/
	while (argc--)
		printf("%s\n", *(argv++));
	return (0);
}
