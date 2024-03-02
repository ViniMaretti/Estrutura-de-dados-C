#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct No {
  int codigo;
  char nome[30];
  struct No *next;
} No;

void limparBuffer(void) {
  while (getchar() != '\n');
}

int main(void) {
  No *dados = NULL;
  No *temp;
  char continuar;

  do {
    temp = (No*) malloc(sizeof(No));

    printf("Dados:\n");
    printf("\tInforme o codigo: ");
    scanf("%d", &temp->codigo);
    limparBuffer();
    printf("\tDigite o nome: ");
    fgets(temp->nome, 30, stdin);

    temp->next = dados;
    dados = temp;

    do {
      printf("Gostaria de inserir novos dados [S]im [N]ao? ");
      scanf(" %c", &continuar);
      continuar = toupper(continuar);
      limparBuffer();  
    } while (continuar != 'S' && continuar != 'N');
  } while (continuar == 'S');

  printf("Todos os dados inseridos:\n");
  while (dados != NULL) {
    printf("Dados:\n");
    printf("\tCodigo: %d\n", dados->codigo);
    printf("\tNome: %s\n", dados->nome);
    temp = dados->next;
    free(dados);
    dados = temp;
  }

  return 0;
}