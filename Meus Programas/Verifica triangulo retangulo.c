#include<stdio.h>

void verificaLados(int n1, int n2, int n3)
{
    int hipotenusa, cateto1, cateto2;
    if(n1 > n2 && n1 > n3)
    {
        hipotenusa = n1;
        cateto1 = n2;
        cateto2 = n3;
    }
    else
        if(n2 > n1 && n2 > n3)
        {
            hipotenusa = n2;
            cateto1 = n1;
            cateto2 = n3;
        }
        else
        {
            hipotenusa = n3;
            cateto1 = n1;
            cateto2 = n2;
        }
    if(hipotenusa*hipotenusa == (cateto1*cateto1 + cateto2*cateto2))
    {
        printf("\nE um triangulo retangulo!");
    }
    else
    {
        printf("\nNao e um triangulo retangulo!");
    }
}

int main()
{
    int num1, num2, num3;
    printf("Digite os tres lados do triangulo: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    verificaLados(num1, num2, num3);
    verificaLados(num2, num1, num3);
    verificaLados(num3, num2, num1);
    return 0;
}
