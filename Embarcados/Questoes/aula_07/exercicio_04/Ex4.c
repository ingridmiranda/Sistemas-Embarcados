#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>

int main(){
	pid_t pid_filho;
	int fd[2];

	pipe(fd);
	pid_filho = fork();

	if(pid_filho == 0){
		char nome[30];

	scanf("%s", nome);
	if(write(fd[1], nome, sizeof(nome))<0)
		printf("Erro de escrita");
	
	}
	else{
		char nome[30];
		sleep(1);
		if(read(fd[0], nome, 30)<0)
		printf("Erro de escrita");
		else{
			printf("%s", nome);
		}

	}

return 0;



}
