/* *
* Arquivo: somaDivisores.c
* Autor:  Rodrigo Tarrega Martins  júnior
* Matrícula: 12121ETE007
* Criado em:03/11/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    int num;
    printf ( " Entre com seu numero: " );

    scanf ( " %d " , &num);
    int resultado = 0 ;
    for ( int i = 1 ; i<=num; i++){
        if (num%i == 0 ){
            resultado = resultado+i;
        }
    }
    printf ( " %d \n " , resultado);
    retorna  0 ;
}
