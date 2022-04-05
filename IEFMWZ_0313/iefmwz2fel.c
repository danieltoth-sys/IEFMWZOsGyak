#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#pragma warning(disable:4996)

int main() {
    char command[50];
    char command2[50];
    scanf("%s", command2);
    strcpy(command, command2);
    system(command);

    return(0);
}