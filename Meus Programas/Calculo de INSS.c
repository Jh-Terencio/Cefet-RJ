#include<stdio.h>

int main()
{
    float salario, inss, salLqd;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if(salario <= 1100)
    {
        inss = salario*0.075;
    }
    else
        if(salario <= 2203.48)
        {
            inss = salario*0.09;
        }
        else
            if(salario <= 3305.22)
            {
                inss = salario*0.12;
            }
            else
            {
                inss = salario*0.14;
            }
    salLqd = salario - inss;
    printf("Salario bruto: %.2f\t\tImposto: %.2f\tSalario liquido: %.2f", salario, inss, salLqd);
    return 0;
}
