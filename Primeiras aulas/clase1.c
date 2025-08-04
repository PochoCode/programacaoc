#include <stdio.h>
#include <string.h>



int main(){
    int idade,matricula;
    float altura;
    char nome[50];
   
   
   printf("Digite seu nome completo: ");
   fgets(nome, sizeof(nome),stdin);
   nome[strcspn(nome,"\n")]='\0';


   printf("Digite sua idade: ");
   scanf("%d", &idade);

   printf("Digite sua altura: ");
   scanf("%f", &altura);


   printf("Digite sua matricula: ");
   scanf("%d", &matricula);


   //Exibir dados
   printf("\n=== DADOS DO ALUNO ===\n");
   printf("Nome:%s - Matricula:%d\n",nome,matricula);
   printf("Idade:%d - Altura:%.2f\n",idade,altura);

   return 0;
   

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    // Sintaxe scanf
    //scanf("formato1""formato2, &variavel1, variavel2, variavel3,...");
   /* printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf(" Qual é seu nome: ");
    scanf("%s", nome);
    printf(" Seu nome é: %s\n", nome);
    printf("A idade é: %d\n A altura é : %.2f\n ", idade,altura);*/

}