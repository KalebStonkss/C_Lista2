#include <stdio.h>
int main(){
    int termo;
    puts("Até quantos termos você deseja para o cálculo do pi?");
    scanf("%d",&termo);
    double pi = 0.0;
    int denominador = 1;
    double vetor[termo];
    for(int i = 0; i<termo;i++){
        if(i%2 == 0){
            pi = pi + 4.0 / denominador;
        } 
        else{
            pi = pi - 4.0 / denominador;
        }
        vetor[i] = pi;
        denominador = denominador + 2;
    }
    printf("Valor aproximado de pi em: \n");
    for(int i = 0;i< termo;i++){
        printf("%d = %.15f \n",i+1,vetor[i]);
    }
}
