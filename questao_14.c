#include <stdio.h>

int main() {
    int a,b;
    int cont,cont_b;
    puts("Digite o termo A da faixa \n");
    scanf("%d",&a);
    puts("Digite o termo B da faixa \n");
    scanf("%d",&b);
    for(int i = a;i<=b;i++){
        if(i%3 == 0){
            cont = cont+1;
        }
    }
    for(int j = b; j>=a;j--){
        if(j%3 == 0){
            cont_b = cont_b + 1;
        }
    }
    printf("Quantidade de números divisíveis por 3 em A->B: %d \n",cont);
    printf("Quantidade de números divisíveis por 3 em B->A: %d \n",cont_b);
}
