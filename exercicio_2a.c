#include<stdio.h>

void a();

int main(){
    a();
    return 0;
}

void a(){
    int n;
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &n);
    if (n%4==0)
        printf("%d e multiplo de 4.\n", n);
    else
        printf("%d nao e multiplo de 4.\n", n);
}