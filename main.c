#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

  printf("               .__                                \n");
  printf("__  _  __ ____ |  |   ____  ____   _____   ____   \n");
  printf("\\ \\/ \\/ // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\  \n");
  printf(" \\     /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/  \n");
  printf("  \\/\\_/  \\___  >____/\\___  >____/|__|_|  /\\___  > \n");
  printf("             \\/          \\/            \\/     \\/  \n");
  printf("\n\n");
  
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
    printf("\n\n");
    printf("                                 _        \n");
    printf("                                | |      \n");
    printf("  ___ ___  _ __   __ _ _ __ __ _| |_ ___ \n");
    printf(" / __/ _ \| '_ \\ / _` | '__/ _` | __/ __|\n");
    printf("| (_| (_) | | | | (_| | | | (_| | |_\__ \\ \n");
    printf(" \\___\\___/|_| |_|\\__, |_|  \\__,_|\\__|___/\n");
    printf("                  __/ |                  \n");
    printf("                 |___/  \n");
    printf("\n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("total de pontos: %.1f\n", pontos);
  }else{
    printf("voce perdeu! tente novamente.\n");
    printf("\n\n");
    printf("  ________________________ ___.__.  \n");
    printf(" /  ___/  _ \\_  __ \\_  __ <   |  |  \n");
    printf(" \\___ (  <_> )  | \\/|  | \\/\\___  |  \n");
    printf("/____  >____/|__|   |__|   / ____|  \n");
    printf("     \\/                    \\/       \n");
    printf("\n");
  }

  return 0;

}
