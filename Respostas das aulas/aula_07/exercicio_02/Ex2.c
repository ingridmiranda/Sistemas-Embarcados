#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

int main()
{
	pid_t pid_filho;
	int fd[2];	// Descritores do pipe

	pipe(fd);	// Cria o pipe
	pid_filho = fork();	// Cria o processo


	if(pid_filho == 0) // Codigo do filho
	{
	char msg[100];

	strcpy(msg, "\nFILHO: Pai, qual é a verdadeira essência da sabedoria?\n");
		
	
	if(write(fd[1], msg, sizeof(msg)) < 0) {
		printf("Erro na escrita do pipe\n");
	}
	sleep(1);

	if (read(fd[0], msg, 100) < 0){
		printf("Erro na leitura do pipe\n");
	}else{
		printf("%s\n", msg);
	}
	sleep(1);
	
	strcpy(msg, "FILHO: Mas até uma criança de três anos sabe disso!\n");

	if(write(fd[1], msg, sizeof(msg)) < 0) {
		printf("Erro na escrita do pipe\n");
	}		
	sleep(1);
	
	if (read(fd[0], msg, 100) < 0){
		printf("Erro na leitura do pipe\n");
	}else{
		printf("%s\n", msg);
	}	
	sleep(1);
	
	
	}

	// Codigo do pai

	else
	{
	char msg_pai[100];

	sleep(1);

	if(read(fd[0], msg_pai, 100) < 0) {
		printf("Erro na leitura do pipe\n");
	}else{
		printf("%s\n", msg_pai);
	}
	sleep(1);

	strcpy(msg_pai, "PAI: Não façais nada violento, praticai somente aquilo que é justo e equilibrado.\n");

	if (write(fd[1], msg_pai, sizeof(msg_pai)) < 0){
		printf("Erro na escrita do pipe\n");
	}
	sleep(1);



	if(read(fd[0], msg_pai, 100) < 0) 
		printf("Erro na leitura do pipe\n");
	else{
		printf("%s\n", msg_pai);
	}

	sleep(1);
	
	strcpy(msg_pai, "PAI: Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...!\n");
	
	if (write(fd[1], msg_pai, sizeof(msg_pai)) < 0)
		printf("Erro na escrita do pipe\n");
	sleep(1);

	}

	return 0;
}
