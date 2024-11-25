#include <stdio.h>

int main() {
    int num,cont=0;
    puts("Digite um número inteiro: ");
    scanf("%d",&num);
    while(num>0){
        int divisao = num%10;
        if(divisao == 7){
            cont = cont+1;
        }
        num = num/10;
    }
    printf("Existem %d dígitos de algarismo 7",cont);
}
