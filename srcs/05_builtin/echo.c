#include "minishell.h"

int	builtin_echo(char **argv)
{
	int i;
	int newline;


	i = 1;
	newline = 1;
	if (argv[1] && ft_strcmp(argv[1], "-n") == 0)
	{
		newline = 0;
		i++;
	}
	while (argv[i])
	{
		printf("%s", argv[i]);
		if ((argv[i + 1] && (argv[i][0] != '\'') && (argv[i + 1][0] != '\''))
			&& (argv[i + 1] && (argv[i + 1][0] != '$')))
				printf(" ");
		i++;
	}
	if (newline)
		printf("\n");
	return (SUCCESS);
}
