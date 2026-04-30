#include <stdio.h>

void exibir_vetor(int vetor[], int n){
    for (int i=0; i < n; i++){
    int valor = vetor[i];
    printf ("O indice do valor e: %d\nO valor do vetor e: %d\n\n", i, valor);
    }
}

int main (){
    int tamanho; // tamanho do vetor
    int valores[5]; // inicialização do vetor
    
    printf("Digite a quantidade de valores que gostaria no vetor: ");
    scanf("%d", &tamanho);
    valores[tamanho]; //vetor a ser utilizado
    // Criar inicialização para o tamanho do vetor com zeros

    exibir_vetor(valores, tamanho);
    //Exibir os valores dentro do vetor

    // antes

/*     for (int i=0; i < 3; i++){
        int valor = valores[i];
        printf ("O indice do valor e: %d\nO valor do vetor e: %d\n\n", i, valor);
    } */

    //depois com função
    //Através da interação do usuário, armazenar os valores 1, 5, 4
    for(int i = 0; i < 3; i++){
        printf("Digite o valor que gostaria de armazenar no indice %d: ", i);
        scanf("%d", &valores[i]);
    }
    // Exibir valores dentro do vetor
    exibir_vetor(valores, tamanho);

    return 0;
}