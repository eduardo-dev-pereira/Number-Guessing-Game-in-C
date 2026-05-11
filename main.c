#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

  //imprime o cabecalho do nosso jogo
  printf("****************************************\n");
  printf("*Bem vindo ao nosso jogo de adivinhacao*\n");
  printf("****************************************\n");

  int segundos = time(0);
  srand(segundos);

  int numerogrande = rand();

  int numeroSecreto = (numerogrande % 100) + 1;
  int chute;
  int tentativas = 1;
  double pontos = 1000;
  int acertou = 0;

  int nivel;
  printf("qual o nivel de dificuldade?\n");
  printf("(1) facil (2) medio (3) dificil\n");
  scanf("%d", &nivel);

  int numeroTentativas;

  switch(nivel){
    case 1: numeroTentativas = 20;
    break;
    case 2: numeroTentativas = 15;
    break;
    default: numeroTentativas = 6;
    break;
}

  /*if(nivel == 1){
    numeroTentativas = 20;
  }else if(nivel  == 2){
    numeroTentativas = 15;
  }else if(nivel == 3){
    numeroTentativas = 6;
  }else{
    printf("opcao invalida\n");


  }*/
    for(int i = 1; i <= numeroTentativas; i++){
  //for(int i=1; i<=NUMERO_DE_TENTATIVAS; i++){
    printf("tentativa %d\n", tentativas);
    printf("chute um numero: ");
    scanf("%d", &chute);
    printf("seu chute foi %d\n", chute);


    if(chute<0){
      printf("voce nao pode chutar numeros negativos\n");

      continue;
    }



    acertou = (chute==numeroSecreto);
    int maior = chute > numeroSecreto;

    if(acertou){

      break;

    }
    else if(maior){
      printf("que e maior que o numero secreto\n\n");
      }

    else{
            printf("que e menor que o numero secreto\n\n");
      }
      tentativas++;
      double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
      pontos = pontos - pontosPerdidos;

    }
  printf("\n");
  printf("fim de jogo!\n");

  if(acertou){
    printf("voce ganhou!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("total de pontos: %.1f\n", pontos);
  }else{
    printf("voce perdeu! tente novamente.\n");

  }

  return 0;

}