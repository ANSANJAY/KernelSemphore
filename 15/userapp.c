#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	int fd;
	unsigned int i = 0;

	fd = open("/dev/msg", O_RDWR);
	if (fd < 0) {
		perror("fd failed");
		exit(2);
	}
	printf("open successful\n");
	getchar();
	close(fd);
}
