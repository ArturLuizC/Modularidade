#include<stdio.h>

void d();

int main(){
    d();
    return 0;
}

void d(){
    int x, y, i, m=1;
    printf("Entre dois dois numeros inteiros positivos:\n");
    scanf("%d %d", &x, &y);
    while (x<0 || y<0){
        printf("Erro! Entre dois dois numeros inteiros positivos:\n");
        scanf("%d %d", &x, &y);   
    }
    for (i=0; i<y; i++){
        m=m*x;
    }
    printf("Resultado = %d\n", m);
}