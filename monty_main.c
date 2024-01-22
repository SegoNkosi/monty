#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



/**
 * main - the entry point for Monty Interp
 *
 * @argc: the count of arguments passed to the program
 * @argv: pointer to an array of char pointers to arguments
 *
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
 */
char **op_toks = NULL;
int main(int argc, char *argv[])
{
	FILE *script_file;
	int exit_status;

	if (argc != 2)

	{
		fprintf(stderr, "Usage: %s <script>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	script_file = fopen(argv[1], "r");


	if (script_file == NULL)

	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

/* Call the run_monty function with the script file */
	exit_status = run_monty(script_file);

	fclose(script_file);

	return (exit_status);
}
