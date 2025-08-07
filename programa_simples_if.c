#include <stdio.h>
#include <stdlib.h>



/*int main() {

    int idade;

printf("Digite sua idade:\n ");
scanf("%d", &idade);

if(idade >= 18) {
    printf("Vc é maior de idade\n");
} else {
    printf("Vc é menor de idade\n");

}
    return 0;





}*/

int main() {
float temperatura , umidade;

unsigned int estoque , estoqueMinimo=100;

printf("Digite a temperatura: ");
scanf("%f", &temperatura);
printf("Digite a umidade: ");
scanf("%f", &umidade);
printf("Digite o estoque: ");
scanf("%u", &estoque);

if(temperatura > 30)
{
    printf("A temperatura está alta\n");
} else {
    printf("A temperatura está normal\n");
}
if(umidade > 70)
{
    printf("A umidade está alta\n");
} else {
    printf("A umidade está normal\n");
}
if(estoque < estoqueMinimo)
{
    printf("O estoque está abaixo do mínimo\n");
} else {
    printf("O estoque está adequado\n");
}


return 0;
}