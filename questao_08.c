#include <stdio.h>

int main() {
    int valor,entrada,prestacao;
    puts("Digite o valor da mercadoria \n");
    scanf("%d",&valor);
    puts("Digite o valor da entrada \n");
    scanf("%d",&entrada);
    prestacao = valor/3;
    entrada = valor - (prestacao*2);
    printf("Valor da mercadoria: %d \n",valor);
    printf("Valor da entrada: %d \n",entrada);
    printf("Valor de cada prestação %d \n",prestacao);
}
