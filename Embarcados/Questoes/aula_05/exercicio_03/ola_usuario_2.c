#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

//int string_valida(char *str){
//	char c = *str;
//	while (c!='\0'){
//	if((c<'0')||(c>'9'))
//		return 0;
//	c = *(++str);
//	}
//	return 1;
//}

int main(int argc, char **argv){

	char nome_arq[20], *nome, *idade;

	nome = argv[1];
	idade = argv[2];


	//garantir que a entrada dada pelo usuário está correta
//	if (argc<3){
//		puts("Insira um nome e uma idade");
//		return -1;
//	}

	//garantir que a idade seja um valor inteiro
//	if(string_valida((char*)(argv[2]==0)){
//		puts("Insira uma idade válida");
//		return -1;
//	}

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

//char conteudo[500];
//sprintf(conteudo, "Nome: %s\nIdade: %d anos\n", argv[1], argv[2]);
//write(fd, conteudo, strlen(conteudo)*sizeof(char));
