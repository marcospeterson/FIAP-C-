#include <stdio.h>

typedef struct {
    int rm;
    char nome[50];
    float nota;
}Aluno;

void atualiza_nota(Aluno* a,float valor){
    a ->nota = valor;
}

int main(){
    Aluno aluno[2] = {{123, "maria", 8.5},{453, "joão", 7.3}};
    // Aponta para o primeiro elemento do array (maria)
    Aluno *ptr = &aluno;// define a memória da estrutura
    ptr++; // acesso ao próximo aluno através da memória
    atualiza_nota(ptr, 7.5);
    // ptr++;
    // ptr++;
    printf("%f", &ptr->nota);

    return 0;
}
