#include <stdio.h>

int main() {
    int fatorial = 1;
    for(int i = 1;i<=10;i++){
        if(i%2 != 0){
            fatorial = fatorial*i;
        }
    }
    printf("Fatorial: %d \n",fatorial);
}
