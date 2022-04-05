#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#pragma warning(disable:4996)

int main() {
    char command[50];

    strcpy(command, "dir");
    system(command);

    char command2[50];
    strcpy(command2, "dirr");
    system(command2);

    return(0);
}