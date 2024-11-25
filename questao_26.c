#include <stdio.h>

int main() {
    printf("Decimal\t Binário \t Octal \t Hexadecimal \t \n");
    for(int i = 1; i<=256;i++){
        printf("%d\t    ",i);
        for(int j = 7; j>=0;j--){
            printf("%d",(i>>j)&1);
        }
        printf("    \t");
        printf("%o\t         ",i);
        printf("%X\n",i);
    }
}
