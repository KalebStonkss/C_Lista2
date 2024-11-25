#include <stdio.h>
int main(){
    int ano = 1;
    int jose = 150,pedro=110;
    while(jose>pedro){
        jose = jose + 2;
        pedro = pedro + 3;
        ano = ano + 1;
    }
    printf("Anos necessários: %d\n",ano);
}
