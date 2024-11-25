#include <stdio.h>
int main(){
    int num;
    int dias;
    while (num!=0){
        puts("Digite um número inteiro de 1 a 7");
        scanf("%d",&num);
        switch(num){
        case 1: printf("Domingo\n"); dias +=dias;
        break;
        case 2: printf("Segunda-feira\n"); dias +=dias;
        break;
        case 3: printf("Terça-feira\n"); dias +=dias;
        break;
        case 4: printf("Quarta-feira\n"); dias +=dias;
        break;
        case 5: printf("Quinta-feira\n"); dias +=dias;
        break;
        case 6: printf("Sexta-feira\n"); dias +=dias;
        break;
        case 7: printf("Sábado\n"); dias +=dias;
        break;
        default: printf("Número de dia não válido! Digite de 1 a 7 apenas\n");
        break;
        }
    } 
    printf("Dias: %d",dias);
    while(dias<8){
        printf("Todos os dias foram contados");
    }
}