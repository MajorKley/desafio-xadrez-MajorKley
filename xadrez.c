#include <stdio.h>

int main() {
 //declarar variáveis movimentação

   int cima, baixo, esquerda, direita;
//saida
   printf("\n movimentação torre \n");
//torre
 for(direita = 1; direita <= 5; direita++){

    printf("Torre move para: direita\n");
 }

  printf("\n movimentação rainha \n");

//rainha
for(esquerda = 1; esquerda <=8; esquerda++){
   printf("Rainha move para: esquerda \n");
}

printf("\n movimentação bispo \n");

//bispo
for(esquerda = 1 ,direita = 1; esquerda <=5 && direita <=5; esquerda++ , direita++){
   printf("bispo move: esquerda e direita \n");}


  return 0;

}
