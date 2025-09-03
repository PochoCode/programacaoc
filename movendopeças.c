#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função para limpar a tela
void limparTela() {
system("clear||cls");
}
//função para pausar a tela
void pausarTela() {
   getchar();
   printf("Pressione Enter para continuar...");
   getchar();
   limparTela();
}

// Função para mover a torre
void movertorre(int i){
   if(i>0){
   printf("Direita\n");
   movertorre(i-1); 
}
}
// Função para mover a rainha
void moverrainha(int j){
   if(j>0){
      printf("Esquerda\n");
      moverrainha(j-1);
   }
}
// Função para mover o bispo
void moverbispo(int k){
   if(k>0){
      printf("cima,direita\n");
      moverbispo(k-1);
   }
}


int main() {
   // Declaração da variável de escolha
   int escolha;
   // Loop do menu usando do while
do{
   // Menu de opções
   printf("Escolha a peça que deseja mover:\n");
   printf("1 - Torre\n");
   printf("2 - Rainha\n");
   printf("3 - Bispo\n");
   printf("4 - Cavalo\n");
   printf("5 - Sair\n");
   printf("Digite sua escolha: ");
   scanf("%d", &escolha);
   limparTela();

   // Estrutura switch para tratar as escolhas
   switch(escolha){
  case 1 :
   // Movendo a torre
   printf("Movendo a Torre:\n");
 
    movertorre(5);
    pausarTela(); 
   break ;
   case 2 :
   // Movendo a rainha
   printf("Movendo a Rainha:\n");
   moverrainha(8);
   pausarTela();
   break ;
   case 3 :
   // Movendo o bispo
   printf("Movendo o Bispo:\n");
   moverbispo(5);
   pausarTela();
   break ;
   case 4 :
   // Movendo o cavalo usando for aninhado
   printf("Movendo o cavalo:\n");
   for(int i=0 ; i < 2; i++){
      printf("Cima\n");
      for(int j = 1; j > 0 && i > 0; j--){
         printf("Direita\n");
        }
         }
   pausarTela();
   break ;
   case 5 :
   // Saindo do programa
   break;
   default:
   printf("Opção inválida. Tente novamente.\n");
   pausarTela();
   break ;
   }
}while(escolha != 5);


   return 0;
}