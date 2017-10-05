#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	int fd;
	int idade;
	char idad[10];
	char nome[20];
	char nome_arq[20];
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	sprintf(idad, "%i", idade);
	
	sprintf(nome_arq, "%s.txt", nome);
	fd = open(nome_arq, O_RDWR | O_CREAT, S_IRWXU);
	
	write(fd,"Nome: ",6);
	write(fd,nome, strlen(nome)*sizeof(char));
	write(fd,"\nIdade: ",9);
	write(fd, idad, strlen(idad)*sizeof(char));
	write(fd,"\n",2); 

	close(fd);
	return 0;
} 
