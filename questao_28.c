#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main(){
    unsigned char v[TAM];
    int x[TAM],y[TAM],d[TAM];
    puts("Digite os valores de x");
    for(int i = 0; i < TAM; i++){
        scanf("%d",&x[i]);
    }
    puts("Digite os valores de y");
    for(int i = 0; i < TAM; i++){
        scanf("%d",&y[i]);
    }
    for(int i = 0; i < TAM; i++){
        d[i] = abs(x[i]-y[i]);
    }
    int menorDistancia = d[0];
    int menorDistanciaX = x[0];
    int menorDistanciaY = y[0];
    for(int j = 1; j < TAM;j++){
        menorDistancia = (menorDistancia > d[j]?d[j]:menorDistancia); // Para saber a menor distância, considere a menor distância como o primeiro valor, depois usa o for pra ver se algum outro valor de distância é menor que a menor atual, se for, substitui.
        menorDistanciaX = (menorDistancia? j : menorDistanciaX);
        menorDistanciaY = (menorDistancia? j : menorDistanciaY);
    }
    puts("Distâncias: ");
    for(int i = 0; i <  TAM; i++){
        printf("Distância de x [%d] para y [%d] = %hhu\n",i+1,i+1,d[i]);
    }
    printf("Menor distância = %d em x[%d] a y[%d] \n",menorDistancia,menorDistanciaX,menorDistanciaY);
}