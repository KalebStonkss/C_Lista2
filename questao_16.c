#include <stdio.h>

int main() {
    int a,b;
    int soma,soma_dois;
    for(int i = 0;i<=200;i++){
        if(i <= 100 && i%3 == 0){
            soma = i + soma;
        }
        if(i > 100 && i%5 == 0){
            soma_dois = i + soma_dois;
        }
    }
    printf("Somatório de números divisíveis por 3 em 0-100: %d \n",soma);
    printf("Somatório de números divisíveis por 3 em 100-200: %d \n",soma_dois);
}
