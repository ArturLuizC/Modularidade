#include<stdio.h>
#include<math.h>

void a();

int main(){
    a();
    return 0;
}

void a(){
    int a, b, c, i, s=0, ma, me;
    printf("Entre com 3 numeros inteiros, sendo o primeiro maior que 1:\n");
    scanf("%d %d %d", &a, &b, &c);
    while(a<1){
        printf("Erro! Entre com 3 numeros inteiros, sendo o primeiro maior que 1:\n");
        scanf("%d %d %d", &a, &b, &c); 
    }
    ma=(b+c+abs(b-c))/2; // definindo o menor numero entre b e c.
    me=(b+c-abs(b-c))/2; // definindo o maior numero entre b e c.
    for (i=me; i<=(ma); i++){
        if (i%a==0)
            s=s+i;
    }
    printf("Soma = %d\n", s);
}