#include<stdio.h>

void d();

int main(){
    d();
    return 0;
}

void d(){
    float r, pi=3.14159;
    printf("Entre com o valor do raio:\n");
    scanf("%f", &r);
    printf("O volume da esfera e %.2f\n", 4*pi*r*r*r/3.0);
}