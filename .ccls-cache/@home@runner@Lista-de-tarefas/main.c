#include "functions.h"
#include <stdio.h>

int main(void) {
  int opcao;
  do {
    printf("| > Menu principal: \n");
    printf("|1 - Cria Tarefa;\n");
    printf("|2 - Listar Tarefas;\n");
    printf("|3 - Apagar Tarefa;\n");
    printf("|4 - Sair;\n");
    printf("------------------\n");
    printf("Digite a opção desejada: ");
    int i = scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      criar_tarefa();
      break;
    case 2:
      deletar_tarefa();
      break;
    case 3:
      listar_tarefa();
      break;
    }
  } while (opcao != 4);
}
