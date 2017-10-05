#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){

	char nome_arq[20], *nome, *idade;

	nome = argv[1];
	idade = argv[2];

	sprintf(nome_arq, "%s.txt", nome);

	int fd = open(nome_arq, O_RDWR | O_CREAT, S_IRWXU);
 
	write(fd, "Nome: ", 6);
	write(fd, nome, strlen(nome)*sizeof(char));
	write(fd, "\n", 2);
	write(fd, "Idade: ", 7);
	write(fd, idade, strlen(idade)*sizeof(char));
	write(fd, "\n", 1);

	close(fd);
	
	return 0;
}
