#include <stdio.h>

int main() {
    int num,invertido = 0;
    puts("Digite um número inteiro: ");
    scanf("%d",&num);
    int copia = num;
    while(num>0){
        int digito = num%10;
        invertido = (invertido<<3) + (invertido<<1) + digito;
        num = num/10;
    }
    if(copia==invertido){
        printf("É um palíndromo");
    }
    else{
        printf("Não é um palíndromo");
    }
}
