/*
* Arquivo: aritmint.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 03/11/2022
*/
#include <stdio.h>

int main(void){
    int n, soma;
    scanf("%d", &n);
    soma = ((1+n)*n)/2;
    printf("%d", soma);
    return 0;
}