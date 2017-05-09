#include "tp_fila.h"

void FFVazia(TFila *Fila) {
    Fila->Frente = (TCelulaF*) malloc(sizeof(TCelulaF));
    Fila->Tras = Fila->Frente;
    Fila->Frente->Prox = NULL;
}


int VaziaF(TFila Fila) {
    return (Fila.Frente == Fila.Tras);
}


void Enfileira(TFItem x, TFila *Fila) {
    Fila->Tras->Prox = (TCelulaF*) malloc(sizeof(TCelulaF));
    Fila->Tras = Fila->Tras->Prox;
    Fila->Tras->FItem = x;
    Fila->Tras->Prox = NULL;
}


void Desenfileira(TFila *Fila, TFItem *Item) {
    if (Vazia(*Fila)) {
        printf("Erro: fila VaziaF\n");
        return;
    }
    ApontadorF q = Fila->Frente;
    Fila->Frente = Fila->Frente->Prox;
    *Item = Fila->Frente->FItem;
    free(q);
}
