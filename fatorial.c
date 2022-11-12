/*
* Arquivo: aritmint.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdint.h>

int  main ( int argc, char ** argv){
    int n, i, gordura;
    scanf ( " %d " , &n);
    gordura = 1 ;
    for (i = 1 ; i <= n; i++){
        gordura = gordura * i;
    }
    printf ( " %d \n " , gordura);
    return  0 ;
}