#include<stdio.h>
#include <stdlib.h>

typedef int TChave;

typedef struct {
    TChave Chave;
    // outros componentes
} TPItem;

typedef struct Celula 	*Apontador;

typedef struct Celula {
    TPItem PItem;
    Apontador Prox;
} TCelula;

typedef struct {
    Apontador Fundo;
    Apontador Topo;
    int Tamanho;
} TPilha;

void FPVazia(TPilha *Pilha);

int Vazia(TPilha Pilha) ;

void Empilha(TPItem x, TPilha *Pilha);


void Desempilha(TPilha *Pilha, TPItem *PItem);


int Tamanho(TPilha Pilha) ;
