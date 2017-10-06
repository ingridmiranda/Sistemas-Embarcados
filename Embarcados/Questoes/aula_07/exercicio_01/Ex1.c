#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{

	int fd[2];	// Descritores do pipe
	turn = 0;
	pipe(fd);	// Cria o pipe
	pid_filho = fork();	// Cria o processo
	int i;
	pid_t pid_filho;


	if(pid_filho == 0) // Codigo do filho
	{
		if(turn ==1){
		int contador_filho;
		printf("Filho vai ler o pipe\n");
		
		for(i=0; i<10; i++){
			if(read(fd[0], &contador_filho, sizeof(int)) < 0) 
				printf("Erro na leitura do pipe\n");
			else
			printf("Filho leu: %d\n", contador_filho);
		}
		sleep(1);
	}}

	// Codigo do pai
	else
	{
		int contador_pai;
		if (turn == 0){
		for(i=0; i<10; i++){
			contador_pai = i+1;
		printf("Pai vai escrever no pipe\n");
		if (write(fd[1], &contador_pai, sizeof(int)) < 0)
			printf("Erro na escrita do pipe\n");
		else
		printf("%d\n", contador_pai);
		sleep(1);
		}
	printf("Pai terminando execução \n");
		}
	turn = 1;
	}
	return 0;
}
