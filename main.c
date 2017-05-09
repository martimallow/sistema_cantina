#include "tp_fila.c"
#include "tp_pilha.c"

int main() {
  TFila *ficha;
  ficha = (TFila*) malloc(sizeof(TFila));
  FFVazia(ficha);

  TFila *bet;//fila bandejas e talheres
  bet = (TFila*) malloc(sizeof(TFila));
  FFVazia(bet);

  TPilha *pilha_bandejas;
  pilha_bandejas = (TPilha*) malloc(sizeof(TPilha));
  FPVazia(pilha_bandejas);

  printf("aaaaaa");

}
