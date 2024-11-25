#include <stdio.h>
int main(){
    int num;
    int fatorial;
    puts("Digite um inteiro qualquer");
    scanf("%d",&fatorial);
    num = fatorial-1;
    while (num > 1){
        fatorial = fatorial * num;
        num = num-1;
    }
    printf("Fatorial = %d\n",fatorial);
}