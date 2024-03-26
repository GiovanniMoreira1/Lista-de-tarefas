#define TOTAL 100
typedef struct {
  int prioridade;
  char descricao[300];
  char categoria[100];

} Tarefa;
// Hello guys
int criar_tarefa(Tarefa tarefas[], int *pos);
int listar_tarefa(Tarefa tarefas[], int *pos);
int deletar_tarefa(Tarefa tarefas[], int *pos);
int salvar_binario(Tarefa tarefas[], int total, int pos);
int carregar(Tarefa tarefas[], int total, int *pos);
void clearBuffer();