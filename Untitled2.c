#include<stdio.h>
int main()
{
    float A,B,C,CIRCULO,TRIANGULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%f %f %f",&A,&B, &C);
    TRIANGULO=1/2*(A*B);
    printf("TRIANGULO: %.3f\n",TRIANGULO);
    CIRCULO=3.14159*(C*C);
    printf("CIRCULO: %.3f/n",CIRCULO);
    TRAPEZIO=1/2*(A+B)*C;
    printf("TRAPEZIO: %.3f/n", TRAPEZIO);
    QUADRADO=B*B;
    Printf("QUADRADO: %.3f/n",QUADRADO);
    RETANGULO=A*B;
    printf("RETANGULO: %.3f/n",RETANGULO);
    return 0;

}
