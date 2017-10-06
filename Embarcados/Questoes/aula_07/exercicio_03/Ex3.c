#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

int main()
{
	pid_t pid_filho_1;
	pid_t pid_filho_2;
	int fd[2];	// Descritores do pipe

	pipe(fd);	// Cria o pipe
	

	pid_filho_1 = fork();	// Cria o processo

	if(pid_filho_1 == 0){
	char msg_1[100];
	strcpy(msg_1, "FILHO1: Quando o vento passa, é a bandeira que se move.");

	if(write(fd[1], msg_1, sizeof(msg_1)) < 0) 
		printf("Erro na escrita do pipe\n");
	
	sleep(1);
	if (read(fd[0], msg_1, 100) < 0)
		printf("Erro na leitura do pipe\n");
	else
		printf("%s\n", msg_1);
		
	sleep(1);
	}

	else{
	pid_filho_2 = fork();

	if(pid_filho_2 == 0){
	char msg_2[100];


	if(read(fd[0], msg_2, sizeof(msg_2)) < 0) 
		printf("Erro na escrita do pipe\n");
	else
		printf("%s\n", msg_2);
	
	strcpy(msg_2, "FILHO2: Não, é o vento que se move.");
	if (write(fd[1], msg_2, 100) < 0)
		printf("Erro na leitura do pipe\n");
		
	sleep(1);
	}
	else{

	char msg_3[100];
	sleep(1);
	if(read(fd[0], msg_3, 100) < 0)
		printf("Erro na leitura do pipe\n");
	else
		printf("%s\n", msg_3);
	sleep(1);
	strcpy(msg_3, "PAI: Os dois se enganam. É a mente dos senhores que se move.");

	if(write(fd[1], msg_3, sizeof(msg_3)) < 0) 
		printf("Erro na escrita do pipe\n");
	
	sleep(1);
	
}}
return 0;
}
