#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

int main()
{
	pid_t pid_filho;
	int fd[2];	// Descritores do pipe
	pipe(fd);	// Cria o pipe
	pid_filho = fork();	// Cria o processo
	int i;


	if(pid_filho == 0) // Codigo do filho
	{
		int contador_filho;
		printf("Filho vai ler o pipe\n");
		
		for(i=0; i<10; i++){
			if(read(fd[0], &contador_filho, sizeof(int)) < 0) 
				printf("Erro na leitura do pipe\n");
			else
			printf("Filho leu: %d\n", contador_filho);
		}
		sleep(1);
	}

	// Codigo do pai
	else
	{
		int contador_pai;
	
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
	return 0;
}
