#include "tp_pilha.h"

void FPVazia(TPilha *Pilha) {
    Pilha->Topo = (TCelula*) malloc(sizeof(TCelula));
    Pilha->Fundo = Pilha->Topo;
    Pilha->Topo->Prox = NULL;
    Pilha->Tamanho = 0;
}

int Vazia(TPilha Pilha) {
    return (Pilha.Topo == Pilha.Fundo);
}

void Empilha(TPItem x, TPilha *Pilha) {
    Apontador Aux = (TCelula*)malloc(sizeof(TCelula));
    Pilha->Topo->PItem = x;
    Aux->Prox = Pilha->Topo;
    Pilha->Topo = Aux;
    Pilha->Tamanho++;
}

void Desempilha(TPilha *Pilha, TPItem *PItem) {
    if (Vazia(*Pilha)) {
        printf("Erro lista vazia\n");
        return;
    }
    Apontador q = Pilha->Topo;
    Pilha->Topo = q->Prox;
    *PItem = q->Prox->PItem;
    free(q);
    Pilha->Tamanho--;
}

int Tamanho(TPilha Pilha) {
    return Pilha.Tamanho;
}
