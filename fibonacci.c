/*
* Arquivo: fibonacci.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 03/11/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    int n;
    printf ( " Entre com seu numero: " );
    scanf ( " %d " , &n);
    for ( int i = 0 , j = 0 , k = 1 , t; i < n; i++, t = j+k, j = k, k = t) printf ( " %d \n " , j );


    retorna  0 ;
}
