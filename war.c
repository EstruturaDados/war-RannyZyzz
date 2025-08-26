#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char territorio_nome[50];
  char territorio_cor[50];
  int territorio_numero_de_tropas;
} Territorios;

int main() {
  Territorios *vetor_dinamico;
  int num_elementos = 5;

  vetor_dinamico = (Territorios *)calloc(num_elementos, sizeof(Territorios));

  if (vetor_dinamico == NULL) {
    fprintf(stderr, "Erro ao alocar memória!\n");
    return 1;
  };

  printf("\n\n");
  printf("==========================================================\n\n");
  printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n\n");
  printf("==========================================================\n\n");

  for (int i = 0; i < num_elementos; i++) {
    printf("--- Cadastrando Território %d ---\n", i + 1);
    printf("\nNome território: ");
    scanf("%s", vetor_dinamico[i].territorio_nome);
    printf("Cor do Exército (ex: Azul, Verde): ");
    scanf("%s", vetor_dinamico[i].territorio_cor);
    printf("Numero de tropas: ");
    scanf("%d", &vetor_dinamico[i].territorio_numero_de_tropas);
    printf("\n\n");
  };

  printf("Cadastro inicial concluído com sucesso!\n\n");

  printf("===========================================\n");
  printf("       MAPA DO MUNDO - ESTADO ATUAL       \n");
  printf("===========================================\n\n");

  for (int i = 0; i < num_elementos; i++) {
    printf("TERRITÓRIO %d:\n", i + 1);
    printf("- Nome: %s\n", vetor_dinamico[i].territorio_nome);
    printf("- Dominado por: Exercito %s\n", vetor_dinamico[i].territorio_cor);
    printf("- Tropas: %d\n\n", vetor_dinamico[i].territorio_numero_de_tropas);
  }

  // Liberar a memória alocada
  free(vetor_dinamico);
  vetor_dinamico = NULL;

  return 0;
};
