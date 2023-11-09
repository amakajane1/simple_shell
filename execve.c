#include "main.h"

int main(int ac, char **av)
{
	int i = 0;
	UNUSED(ac);
	while (av[i] != NULL)
	{
		write(STDOUT_FILENO, av[i], _strlen(av[i]));
		_putchar('\n');
		i++;
	}
	return (0);
}
