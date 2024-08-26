#include<stdio.h>

void triangleArea (){
    double product, base, height;
    printf("Entre com a base e, em seguida, a altura:\n");
    scanf("%lf %lf", &base, &height);
    product = (base*height)/2.0;
    printf("Area: %lf\n", product);
}

int main(){
    triangleArea();
    return 0;
}