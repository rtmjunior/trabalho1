/*
* Arquivo: cosTaylor.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 03/11/2022
*/

# inclui  < math.h >
# define  PI  3.141592653589793115997963468544185161590576171875

# include  < stdio.h >

int  fatorial ( int num);

int  principal ( vazio ){
    int n;
    flutuante x;
    printf ( " Entre com seu numero: " );
    scanf ( " %d " , &n);
    printf ( " Entre com seu numero: " );
    scanf ( " %f " , &x);
    float resultado = 0,0 ;
    for ( int i = 0 ; i <= n; i++){
        resultado = resultado + pow (- 1 , i)* pow (x * PI, 2 *i)/ fatorial ( 2 *i);
    }
    printf ( " %f \n " , resultado);

    retorna  0 ;
}


int  fatorial ( int num){
    unsigned  long  int resultado = 1 ;
    for ( int i = 1 ; i<=num; i++){
        resultado = resultado * i;
    }
    resultado de retorno ;
}
