#include<stdio.h>

int calculaFatorial(int n1)
{
    int resultado;
    resultado = n1;
    n1--;
    while(n1 > 1)
    {
        resultado *= n1;
        n1--;
    }
    if(resultado == 0)
    {
        return 1;
    }
    else
    {
        return resultado;
    }
}

int main()
{
    int num1;
    printf("Digite o numero: ");
    scanf("%d", &num1);
    printf("O fatorial de %d e: %d", num1, calculaFatorial(num1));
    return 0;
}
