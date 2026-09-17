#include <stdio.h>


void contagem (int n){
    // Caso base
    if(n ==0){
        printf("FIM!\n");
        return;
    }

    // Caso recursivo
    printf("%d\n", n); //retorno da pilha a memória
    contagem (n-1);

}

long long potencia(int base, int exp){
    // Caso base
    if (exp == 0) return 1;
    // Caso recursivo
    return base* potencia(base,exp -1);
}

/*int maiorElemento(int v[], int n){
    if (n ==1) return v[0];

    //caso recursivo
    int anterior = maiorElemento()
}*/

int fibonacci (int n){
    //caso base
    if (n <= 0) return n;

    //caso recursivo
    return fibonacci (n-1) + fibonacci(n-2);
}

int main(){
    //contagem(5);
    printf("O resultado da potencia --> %lld.\n", potencia(2,5));
    printf("O fibonacci do valor 4 --> %d.\n", fibonacci(6));

    return 0;
}