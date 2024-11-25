#include <stdio.h>
#include <math.h>
int main() {
    int potencia = 3;
    int vetor[8];
    for(int i = 0; i<=7;i++){
        vetor[i] = pow(potencia,i);
    }
    printf("Resultados das potências de base 3 com expoente: \n");
    for(int j=0;j<=7;j++){
        printf("Expoente %d| %d\n",j,vetor[j]);
    }
}
