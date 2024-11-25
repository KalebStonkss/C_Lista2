#include <stdio.h>
int main(){
    int a,b;
    int quadrado[100];
    int quadrado_dois[100];
    int i = 0;
    int k = 0;
    puts("Digite um número para A");
    scanf("%d",&a);
    puts("Digite um número para B");
    scanf("%d",&b);
    for(a;a<=b;a++){
        if(a%4 == 0){
            quadrado[i] = a*a;
            i++;
        }
    }
    for(b;b>=a;b--){
        if(b%4 == 0){
            quadrado_dois[k] = b*b;
            k++;
        }
    }
    for (int j = 0; j <= i; j++) {
        printf("%d,", quadrado[j]);
    }
     for (int j = 0; j <= i; j++) {
        printf("%d,", quadrado_dois[j]);
    }
}