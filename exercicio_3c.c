#include<stdio.h>

void c();

int main(){
    c();
    return 0;
}

void c(){
    int n, i, f=1, x;
    printf("Entre com um numero natural:\n");
    scanf("%d", &n);
    while(n<0){
        printf("Erro! Entre com um numero natural:\n");
        scanf("%d", n);
    }
    for (i=0; i<n; i++){
        x=(n-i);
        f=f*x;
    }
    printf("Fatorial de %d = %d\n", n, f);
}