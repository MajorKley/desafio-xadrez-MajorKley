#include <stdio.h>

int main() {
 //declarar variáveis movimentação

   int cima, baixo, esquerda, direita;
//saida
   printf("\n movimentação torre \n");
//torre
 for(direita = 1; direita <= 5; direita++){

    printf("direita\n");
 }

  printf("\n movimentação rainha \n");

//rainha
for(esquerda = 1; esquerda <=8; esquerda++){
   printf("esquerda \n");
}

printf("\n movimentação bispo \n");

//bispo
for(esquerda = 1 ,direita = 1; esquerda <=5 && direita <=5; esquerda++ , direita++){
   printf("esquerda e direita \n");}

//cavalo

printf("\n movimentação cavalo\n");

for(baixo=1; baixo <=1; baixo++){
   esquerda = 4; 
      
   while(esquerda > 1){

   printf("baixo\n");
   esquerda--;
   }
     printf("esquerda\n");
}
  return 0;

}
