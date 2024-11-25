#include <stdio.h>
int main(){
    int a,b,somatorio=0;
    puts("Digite um número para A");
    scanf("%d",&a);
    puts("Digite um número para B");
    scanf("%d",&b);
    for(a;a<=b;a++){
        if(a%2 == 0){
            somatorio = somatorio + a;
        }
    }
    for(b;b>=a;b--){
        if(b%2 == 0){
            somatorio = somatorio + b;
        }
    }
    printf("Somatório A>B: %d\n",somatorio);
    printf("Somatório B>A: %d\n",somatorio);
}