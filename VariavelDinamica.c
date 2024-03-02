#include<stdio.h>
#include<stdlib.h>




typedef struct no 
{
    int codigo;
    char nome[30];
}no;

int main(){
struct no *A, *B, *C;

A = NULL;
B = NULL;
C = NULL;

A = (no*)malloc(sizeof(no));
printf("\n informe o codigo");
sacnf("%d", &A->codigo);
printf("\n informe o nome");
scanf("%s", &A->nome);
B=A;
C=A;

}
