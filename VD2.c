#include<stdio.h>
#include<stdlib.h>

typedef struct no
{
    int codigo;
    char nome[30];
}no;

int main()
{
    struct no *A, *B;

    A = NULL;
    B = NULL;
    A = (no*)malloc(sizeof(no));
    printf("\n Informe o codigo");
    scanf("%d", &A->codigo);
    printf("\n Informe o nome");
    scanf("%s", &A->nome);
    B=(no*)malloc(sizeof(no));
    printf("\n informe o codigo");
    scanf("%d", &B->codigo);
    printf("\n informe o nome ");
    scanf("%s", &B->nome);
    free(A);
    A=B;
    free(A);
}
