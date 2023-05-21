#include "shell.h"

/**
 * cd_shell - Changes current directory
 * @datash: Data relevant
 * Return: 1 on success
 */
int cd_shell(data_shell *datash)
{
	char *dire;
	int ishomee, ishomee2, isddash;

	dire = datash->args[1];

	if (dire != NULL)
	{
		ishomee = _strcmp("$HOME", dire);
		ishomee2 = _strcmp("~", dire);
		isddash = _strcmp("--", dire);
	}

	if (dire == NULL || !ishomee || !ishomee2 || !isddash)
	{
		cd_to_home(datash);
		return (1);
	}

	if (_strcmp("-", dire) == 0)
	{
		cd_previous(datash);
		return (1);
	}

	if (_strcmp(".", dire) == 0 || _strcmp("..", dire) == 0)
	{
		cd_dot(datash);
		return (1);
	}

	cd_to(datash);

	return (1);
}

