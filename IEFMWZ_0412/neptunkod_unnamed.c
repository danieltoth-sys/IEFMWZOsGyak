#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#pragma warning(disable<4996>)

int * main(void) {

    int fd[2], nbytes;
    prid_t childpid;
    char string[] = "Toth Daniel Mark, IEFMWZ!\n";
    char readbuffer[80];

    pipe(fd);    

    if ((childpid = fork()) == -1)
    {
        perror("Hiba!");
        exit(1);
    }

    if (childpid == 0)
    {
        close(fd[0]);
        write(fd[1], string, (strlen(string) + 1));
        exit(0);
    }
    else
    {
        close(fd[1]);

        nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
        printf("%s", readbuffer);
    }
	return 0;
}