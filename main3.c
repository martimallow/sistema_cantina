#include "function.c"
//1 fila de ficha
//2 filas de bandejas
//1 pilha de bandeja com 40

int main() {
  TFila *ficha;
  ficha = (TFila*) malloc(sizeof(TFila));
  FFVazia(ficha);


  TFila *bet;//fila bandejas e talheres
  bet = (TFila*) malloc(sizeof(TFila));
  FFVazia(bet);

  TFila *bet2;//fila bandejas e talheres
  bet2 = (TFila*) malloc(sizeof(TFila));
  FFVazia(bet2);


  TPilha *pilha_bandejas;
  pilha_bandejas = (TPilha*) malloc(sizeof(TPilha));
  FPVazia(pilha_bandejas, 30);

  TPilha *pilha_bandejas2;
  pilha_bandejas2 = (TPilha*) malloc(sizeof(TPilha));
  FPVazia(pilha_bandejas2);

  int tempo;
  int inicio = 0;
  int atraso = 0;
  int tempo_gasto = 0;
  int atendidos = 0;
  int cte = 6;
  printf("Digite o tempo (em horas) a ser analisado" );
  scanf("%d",&tempo);
  tempo = (tempo*60) - 4;

  for(inicio; inicio < tempo; inicio++){
    if(inicio%12 == 0){
      Empilha10(pilha_bandejas);
      Empilha10(pilha_bandejas2);
    }

    Enfileira2(ficha,inicio);
    Enfileira2(ficha2,inicio);

    if(PegarBandeja(pilha_bandejas,bet)){
      tempo_gasto += inicio + cte + atraso;
      atendidos++;
    }else{
      atraso++;
    }

    if(PegarBandeja(pilha_bandejas2,bet)){
      tempo_gasto += inicio + cte + atraso;
      atendidos++;
    }else{
      atraso++;
    }

    DesenfileiraEnfileira(ficha,bet);
    DesenfileiraEnfileira(ficha2,bet);

    if(inicio%2 == 0){
      cte-=1;
    }
  }

  printf("TEMPO GASTO TOTAL %d\n ATENDIDOS %d\n",tempo_gasto, atendidos);
  printf("MEDIA TEMPO GASTO POR PESSOA%d\n",tempo_gasto/atendidos);



}
