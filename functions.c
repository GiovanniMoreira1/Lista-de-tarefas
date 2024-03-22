#include "functions.h"
#include <stdio.h>

int criar_tarefa(Tarefa tarefas[], int *pos) {
  if (*pos >= TOTAL)
    return 1;

  printf("Digite a prioridade da tarefa: ");
  scanf("%d", &tarefas[*pos].prioridade);
  clearBuffer();
  printf("Digite a categoria da tarefa: ");
  fgets(tarefas[*pos].categoria, 100, stdin);
  clearBuffer();
  printf("Digite a descrição  da tarefa: ");
  fgets(tarefas[*pos].descricao, 100, stdin);
  clearBuffer();
  *pos = *pos + 1;
  return 0;
}

int deletar_tarefa() { printf("Deletar tarefa\n"); }
  if (*pos == 0)
    return 1;

  int pos_d;
  printf("Digite a posição da tarefa a ser deletada: ");
  scanf("%d", &pos_d);
  if(pos_d >= &pos_d);
  return 2;
  for (int i = pos_d; i < *pos; i++) {
    strcpy(tarefas[i].descricao, tarefas[i + 1].descricao);
    strcpy(tarefas[i].categoria, tarefas[i + 1].categoria);	
  }
int salvar_binario() { printf("Salvar tarefa\n"); }

int listar_tarefa(Tarefa tarefas[], int *pos) {
  if (*pos == 0)
    return 1;

  for (int i = 0; i < *pos; i++) {
    printf("|Pos: %d\n", i + 1);
    printf("|Prioridade: %d\t", tarefas[i].prioridade);
    printf("|Categoria: %s", tarefas[i].categoria);
    printf("|Descrição: %s\n", tarefas[i].descricao);
    printf("|-----------");
  }
  return 0;
} 

int salvar_binario(Tarefa tarefas[], int total, int pos) {
  printf("Salvar tarefa\n");
  return 0;
}

int escrever_binario(Tarefa tarefas[], int total, int pos) {
  printf("Escrever tarefa\n");
  return 0;
}

void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}