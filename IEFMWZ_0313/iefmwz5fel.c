#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <stdlib.h>
#include <unistd.h>

int doWork(){
	fork();
	printf("Hello world!\n");
}
int main() {
	doWork();
	printf("Hello world!\n");
    FILE* fp = fopen("C:\\myfile.txt", "w");

    if (fp == NULL)
    {
        printf("\n could not open file ");
        getchar();
        exit(1);
    }

    getchar();

    abort();
    return 0;
}

int maradekos()
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sumOdd = 0, sumEven = 0, n, i;
    n = fork();

    // Checking if n is not 0
    if (n > 0) {
        for (i = 0; i < 10; i++) {
            if (a[i] % 2 == 0)
                sumEven = sumEven + a[i];
        }
        printf("Parent process \n");
        printf("Sum of even no. is ", sumEven);
    }

    // If n is 0 i.e. we are in child process
    else {
        for (i = 0; i < 10; i++) {
            if (a[i] % 2 != 0)
                sumOdd = sumOdd + a[i];
        }
        printf("Child process \n");
        printf("Sum of even no. is ", sumEven);
    }
    return 0;
}
