#include<stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta, xvertice, yvertice;

    printf("Digite os valores de a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = b*b-4*a*c;

    if(delta > 0)
    {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("O valor de X1 e: %.1f", x1);
        printf("\nO valor de X2 e: %.1f", x2);
    }
    else
        if(delta == 0)
        {
            x1 = -b/(2*a);
            printf("Raiz unica: %.1f",x1);
        }
        else
        {
            printf("Nao possui raiz real");
        }
    xvertice = -b/2*a;
    yvertice = -delta/4*a;
    printf("\nX do vertice: %.1f\tY do vertice: %.1f", xvertice, yvertice);
    return 0;
}
