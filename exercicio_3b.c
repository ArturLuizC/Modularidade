#include<stdio.h>

void b();

int main(){
    b();
    return 0;
}

void b(){
    int s, a;
    printf("Entre com sua altura em centimetros:\n");
    scanf("%d", &a);
    printf("Digite 1 para sexo masculino ou 2 para sexo feminino:\n");
    scanf("%d", &s);
    if (s==1)
        printf("Peso ideal = %.2f\n", 0.95*a-95);
    else{
        if (s==2)
            printf("Peso ideal = %.2f\n", 0.85*a-85);
        else
            printf("Erro!");
    }
}