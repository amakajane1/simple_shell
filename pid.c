#include "main.h"
/*
 * main - print pid
 *
 * Return: always-0
 */
int main(void)
{
	pid_t my_pid;
	my_pid = getppid();
	printf("%i\n", my_pid);
	return (0);
}
