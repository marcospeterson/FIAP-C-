#include <stdio.h>

int main (){
    
    /*Estrutura (LOOP) FOR*/
    
    //for(int i =0; i < 5; i++){
        //executa até a condição for verdadeira
        //printf("%d,", i);
    //}

    /*Estrutura  While*/
    int i = 0;
    printf("Loop While \n");
    while (i <5){
        printf ("%d", i);
        i++;
    }
    i = 0;

    /*Estrutura Do-While*/

    printf("Loop Do-While \n");
    do{
        printf("%d", i);
        i++;
    } while ( i < 5);
    
     return 0;
}