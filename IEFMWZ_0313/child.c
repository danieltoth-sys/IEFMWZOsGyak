#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#pragma warning(disable:4996)
void foo(char* name, char* neptun)
{
    int counter = 0;
	while (counter <10)
	{
		fprintf(stderr, "(%s, \"%s\")\n", name, neptun);
		counter = counter + 1;
	}
}