#include <stdio.h>
int main(){
    int a = 15,b = 90;
    int quadrado[100];
    int i = 0;
    for(a;a<=b;a++){
        if(a%4 == 0){
            quadrado[i] = a*a;
            i++;
        }
    }
    for (int j = 0; j <= i; j++) {
        printf("%d,", quadrado[j]);
    }
}