#include <stdio.h>
int main(){
    int pessoas;
    int i=1;
    int resultado,confirme;
    int paulo=0,renata=0,branco=0,nulo=0;
        while(resultado >= 0){
            puts("Qual o seu voto? 5-Paulo 7-Renata 0-Em branco \n Digite um número negativo para sair");
            scanf("%d",&resultado);
            if(resultado == 5){
                puts("Confirme o seu voto // 1-Sim 0-Não");
                scanf("%d",&confirme);
                switch(confirme){
                    case 0:
                    break;
                    case 1:
                    paulo = paulo + 1;
                    break;
                }
            }
            if(resultado == 7){
                puts("Confirme o seu voto // 1-Sim 0-Não");
                scanf("%d",&confirme);
                switch(confirme){
                    case 0:
                    break;
                    case 1:
                    renata = renata + 1;
                    break;
                }
            }
            if(resultado == 0){
                puts("Confirme o seu voto // 1-Sim 0-Não");
                scanf("%d",&confirme);
                switch(confirme){
                    case 0:
                    break;
                    case 1:
                    branco = branco + 1;
                    break;
                }
            }
            if(resultado !=0 && resultado > 0){
                nulo = nulo + 1;
            }
        }
        i = i + 1;
    }