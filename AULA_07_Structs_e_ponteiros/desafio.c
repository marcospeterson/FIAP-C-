#include <stdio.h>


typedef struct
{
    int id;// 4 bytes
    char nome[20]; //20 bytes
    float preco; //4 bytes
} Produto; //total --> 28 bytes

void aplicarDesconto(Produto*p,float desc){
    if(desc <101 && desc >= 0){
        p->preco *= (1 - (desc / 100));
    } else{
        print("Não há desconto para este produto.");
    }
        
}

int main()
{
    Produto produto = {1, "leite", 7};
    Produto* ptr = &produto;
    // desconto de 10%
    printf("O preco origial  --> R$%.2f", ptr->preco);
    aplicarDesconto(ptr,10);
    printf("O preco com desconto --> R$ %.2f");

    

    return 0;
}