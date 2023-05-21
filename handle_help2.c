#include "shell.h"

/**
 * aux_help - helps information for the builtin helps.
 * Return: no return
 */
void aux_help(void)
{
	char *helps = "help: help [-dms] [pattern ...]\n";

	write(STDOUT_FILENO, helps, _strlen(helps));
	helps = "\tDisplay information about builtin commands.\n ";
	write(STDOUT_FILENO, helps, _strlen(helps));
	helps = "Displays brief summaries of builtin commands.\n";
	write(STDOUT_FILENO, helps, _strlen(helps));
}
/**
 * aux_help_alias - help information for the builtin alias.
 * Return: no return
 */
void aux_help_alias(void)
{
	char *helps = "alias: alias [-p] [name[=value]...]\n";

	write(STDOUT_FILENO, helps, _strlen(helps));
	helps = "\tDefine or display aliases.\n ";
	write(STDOUT_FILENO, helps, _strlen(helps));
}
/**
 * aux_help_cd - help information for the builtin alias.
 * Return: no return
 */
void aux_help_cd(void)
{
	char *help = "cd: cd [-L|[-P [-e]] [-@]] [dir]\n";

	write(STDOUT_FILENO, help, _strlen(help));
	help = "\tChange the shell working directory.\n ";
	write(STDOUT_FILENO, help, _strlen(help));
}

