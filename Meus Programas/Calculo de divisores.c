/*#include<stdio.h>

void calculaDivisores(int n)
{
    int d;
    d = n;
    while(d >= 1)
    {
        if(n % d == 0)
        {
            printf("%d\t", d);
        }
        d--;
    }
}

int calculaNumDivisores(int n)
{
    int d, cont;
    d = n;
    cont = 0;
    while(d >= 1)
    {
        if(n % d == 0)
        {
          cont++;
        }
        d--;
    }
    return cont;
}*/

/*void imprimeNumerosPrimos(int n)
{
    while(n > 1)
    {
        if(calculaNumDivisores(n) == 2)
        {
            printf("\nO numero %d e um numero primo!", n);
        }
        n--;
    }
}*/

/*int main()
{
    int num, NumDivisores;
    printf("Digite um numero para descobrir seus divisores: ");
    scanf("%d", &num);
    calculaDivisores(num);
    NumDivisores = calculaNumDivisores(num);
    printf("\nO numero de divisores de %d e: %d", num, NumDivisores);
    //imprimeNumerosPrimos(num);
    return 0;
}*/

#include<stdio.h>

int calculaSoma(int n1, int n2)
{
    int soma;
    soma = n1+n2;
    return soma;
}

float calculaMedia(int n1, int n2)
{
    float media;
    media = calculaSoma(n1, n2) / 2.0;
    printf("\nMedia: %.1f", media);
}

int main()
{
    int n1, n2, soma;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);
    printf("Soma: %d", calculaSoma(n1, n2));
    calculaMedia(n1, n2);
    return 0;
}
