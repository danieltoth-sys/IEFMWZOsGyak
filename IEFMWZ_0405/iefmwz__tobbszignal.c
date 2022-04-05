#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>

void sigdfl_handler(int signum)
{
	printf("\nEZUTAN A DEFAULT SIGNAL METODUS FUT LE!\n");
	printf("Ami a program befejezese, nyomjon meg barmilyen gombot a kilepeshez!\n");
}

void sig_handler(int signum) {

	printf("\nBEIRTAD A SIGINT KILEPO KODJAT!\n");
	signal(SIG_DFL, sigdfl_handler);
}

int main()
{
	signal(SIGINT, sig_handler);
	for (int i = 1;; i++) {
		printf("%d : IRD BE CTRL+C\n", i);
	}
	return 0;
}
