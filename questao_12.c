#include <stdio.h>
int main() {
    int tabuada,i = 0;
    puts("Digite um número inteiro qualquer");
    scanf("%d",&tabuada);
    while (i<=10){
        printf("%d x %d = %d \n",tabuada,i,tabuada*i);
        i += 1;
    }
}
