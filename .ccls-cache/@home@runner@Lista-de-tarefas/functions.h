#include <stdio.h>
#define TOTAL 100

void criar_tarefa();
void listar_tarefa();
void deletar_tarefa();
void salvar_binario();
void escrever_binario();

typedef struct{
  int prioridade;
  char descricao[300];
  char categoria[100];
  
} Tarefa;