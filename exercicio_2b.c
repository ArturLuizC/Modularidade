#include<stdio.h>

void b();

int main(){
    b();
    return 0;
}

void b(){
    int n;
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &n);
    if (n%2==0)
        printf("%d e um numero par.\n", n);
    else 
        printf("%d e um numero impar.\n", n);
}       