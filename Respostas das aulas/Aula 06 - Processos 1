1. Como se utiliza o comando `ps` para:

(a) Mostrar todos os processos rodando na máquina? 
R - ps ax

(b) Mostrar os processos de um usuário?
R - ps -f -u (nome do usuário)

(c) Ordenar todos os processos de acordo com o uso da CPU?
R - ps aux --sort=-pcpu

(d) Mostrar a quanto tempo cada processo está rodando?
R - ps-e -o etime

2. De onde vem o nome `fork()`?
R - A palavra fork significa bifurcação em inglês. O fork é uma função chamada de sistema, ou seja, ela invoca o sistema operacional para realizar alguma tarefa que o usuário não pode.

3. Quais são as vantagens e desvantagens em utilizar:

(a) `system()`?
R - Vantagem: é simples.
Desvantagem: dá brechas a falhas de execução pois depende muito do sistema.
Então não é recomendado na maioria dos casos.

(b) `fork()` e `exec()`?
R - O fork cria programas filhos, o exec cria e executa o programa, diferente do system que faz uma chamada ao sistema interrompendo os processos.

4. É possível utilizar o `exec()` sem executar o `fork()` antes?
R - Não há função que crie e execute um novo processo em um único passo.

5. Quais são as características básicas das seguintes funções:

(a) `execp()`?
R - Chamada de um processo usando um nome buscado por current path;

(b) `execv()`?
R - Chamada de um processo com nome passado por ponteiros.

(c) `exece()`?
R - Chamada de um processo com argumentos extras, portanto, há como passar alguns argumento para o novo processo.

(d) `execvp()`?
R - Executa o programa a partir de um ponteiro e utilizado argumentos do current path.

(e) `execve()`?
R - Executa o programa apontado por ponteiros e tem suporte para mais de um argumento.

(f) `execle()`?
R - Chamada que aceita argumentos do tipo var args.
