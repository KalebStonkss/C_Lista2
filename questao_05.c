#include <stdio.h>

int main() {
    int num=1,aux=0,menor = 0,mult = 0;
    int input = 1;
    while(1){
        puts("Digite algum número");
        scanf("%d",&num);
        if(aux < num){
            aux = num;
            printf("O maior número agora é %d \n",aux);
        }
        if(input || menor > num){
            menor = num;
            input = 0;
            printf("O menor número agora é %d \n",menor);
        }
        if(num == 0){
            break;
        }
    }
}
