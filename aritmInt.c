/*
* Arquivo: aritmint.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 03/11/2022
*/
#include <stdio.h>

int main(void)
{
    int num1, num2, sum, sub, mult, div, mod;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    sub = num1 - num2;

    mult = num1*num2;

    div = num1/num2;
    
    mod = num1%num2;


    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, sub);
    printf("%d * %d = %d\n", num1, num2, mult);
    printf("%d / %d = %d\n", num1, num2, div);
    printf("%d %% %d = %d\n", num1, num2, mod);
    
}
