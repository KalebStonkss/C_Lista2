#include <stdio.h>
void questao18(){
    int grao = 1;
    int xadrez = 1;
    long long unsigned total = 0;
    while (xadrez<=64){
        total = total + grao;
        grao = grao*2;
        xadrez = xadrez + 1;
    }
    printf(" Total de grãos = %llu \n",total);
}
int main(){
    questao18();
    return 0;
}