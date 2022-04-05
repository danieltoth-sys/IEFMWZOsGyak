#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#pragma warning(disable:4996)

int main() {	
	char buf[20];
	int bufLenght;
	int fileDescriptor;
	int writeInfo;
	int seekInfo;
	int readInfo;

	int i;
	FILE* fptr;
	char fn[50];
	char str[] = "Toth Daniel Mark, GEIK, IEFMWZ\n";
	fptr = fopen("IEFMWZ.txt", "w");
	for (i = 0; str[i] != '\n'; i++) {		
		fputc(str[i], fptr);
	}
	fclose(fptr);	

	fileDescriptor = open("IEFMWZ.txt", O_RDWR);
	if (fileDescriptor == -1)
	{
		perror("open() hiba:");
		exit(fileDescriptor);
	}
	printf("File Descriptor erteke: %d\n", fileDescriptor);

	seekInfo = lseek(fileDescriptor, 0, SEEK_SET);
	if (seekInfo == -1)
	{
		perror("lseek hiba:");
		exit(seekInfo);
	}
	printf("A kurzor pozicioja: %d\n", seekInfo);

	readInfo = read(fileDescriptor, buf, 15);
	if (seekInfo == -1)
	{
		perror("read hiba!");
		exit(readInfo);
	}
	printf("Olvasott byte-ok száma: %d", readInfo);

	strcpy(buf, "Ez egy teszt!");
	bufLenght = strlen(buf);
	writeInfo = write(fileDescriptor, buf, bufLenght);

	if (writeInfo == -1)
	{
		perror("Az iras nem volt sikeres!");
		exit(writeInfo);
	}
	printf("A write()-al beirt byte-ok szama: %d", writeInfo);

}
