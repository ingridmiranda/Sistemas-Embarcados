#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>


int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}
int main(int argc, const char *argv[]){
	pid_t pid_filho_1;
	pid_t pid_filho_2;
	pid_t pid_filho_3;
	
	
	printf("Número do processo: %d\n", (int) getpid());

	pid_filho_1 = fork();

	if (pid_filho_1 == 0){
		printf("processo filho 1: %d\n", (int) getpid ());
		Incrementa_Variavel_Global(getpid());
	}

	else{
		pid_filho_2 = fork();
		if (pid_filho_2 == 0){
			printf("processo filho 2: %d\n", (int) getpid ());
			Incrementa_Variavel_Global(getpid());
		}

		else{
			pid_filho_3 = fork();
			if (pid_filho_3 == 0){
				printf("processo filho 3: %d\n", (int) getpid ());
				Incrementa_Variavel_Global(getpid());
			}
			
			else{
				printf("processo pai: %d\n", (int) getpid ());
				Incrementa_Variavel_Global(getpid());
			}
		}
	}
	
	return 0;
}


