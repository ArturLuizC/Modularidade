#include<stdio.h>
#include<math.h>

void c();

int main(){
    c();
    return 0;
}

void c(){
    int n, m, ma, me, i, soma=0;
    printf("Entre com dois numeros inteiros positivos:\n");
    scanf("%d %d", &n, &m);
    while (n<0 || m<0){
        printf("Erro! Entre com dois numeros inteiros positivos:\n");
        scanf("%d %d", &n, &m);
    }
    ma=(m+n+abs(m-n))/2; // definindo o menor numero.
    me=(m+n-abs(m-n))/2; // definindo o maior numero.
    for (i=me+1; i<=(ma-1); i++){ // a soma nao inclui o primeiro e ultimo numeros do intervalo.
        soma=soma+i;
    }
    printf("A soma e: %d\n", soma);
}