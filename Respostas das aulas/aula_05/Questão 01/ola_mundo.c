#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){
	
	int fd;
	fd = open("olaa_mundo.txt", O_RDWR | O_CREAT);
	write(fd, "Olá Mundo!\n", 12);
	close(fd);
	return 0;

}
