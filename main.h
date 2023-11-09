#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define UNUSED(x) (void)(x)

int _strlen(char *s);
int _putchar(char c);
void print_number(int n);
#endif
