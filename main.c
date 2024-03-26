#include "functions.h"
#include <stdio.h>
#include <string.h>

int main() {
  int pos = 0;
  Tarefa tarefas[TOTAL];

  int e = carregar(tarefas, TOTAL, &pos);
  if (e != 0)
    pos = 0;

  int opcao;
  do {
    printf("|-------------------------\n");
    printf("| > Menu principal: \n");
    printf("|1 - Cria Tarefa;\n");
    printf("|2 - Listar Tarefas;\n");
    printf("|3 - Apagar Tarefa;\n");
    printf("|4 - Sair;\n");
    printf("|-------------------------\n");
    printf("  Digite a opção desejada:\n");
    int i = scanf("%d", &opcao);
    clearBuffer();
    if (opcao == 1) {
      criar_tarefa(tarefas, &pos);
    } else if (opcao == 2) {
      listar_tarefa(tarefas, &pos);
    } else if (opcao == 3) {
      deletar_tarefa(tarefas, &pos);
    } else if (opcao == 4) {
      printf("Saindo...\n");
      salvar_binario(tarefas, TOTAL, pos);
    } else {
      printf("Opção inválida!\n");
    }
  } while (opcao != 4);
}
