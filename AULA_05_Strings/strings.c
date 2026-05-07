#include<stdio.h>
#include<string.h>

int main(){

    char nome[20];// = {'M','A','R','C','O','S'};
    printf("Digite seu nome completo: ");
    //scanf("%s", nome);
    fgets(nome, 20, stdin);
    int tamanho_antes = strlen(nome);

    nome[strcspn(nome, "\n")] = '\0';

    int tamanho_depois = strlen(nome); // tamanho final após strcspn da string

    printf("Tamanho do nome antes da funcao strcspn: %d\n", tamanho_antes);
    printf("Tamanho do nome depois da funcao strcspn: %d\n", tamanho_depois);
    printf("ola, %s\n\n", nome);
    // Utilizando a cópia limitada da string
    char nome_2[20];
    strcpy(nome_2, nome);
    nome_2[strcspn(nome, " \n")] = '\0';

    //int tamanho_nome = strcspn(nome, "\n");
    //printf("%d", tamanho_nome);
    printf("Como posso te ajudar, %s\n", nome_2);

    // Adição de mensagem

    char msg[21] = "O que voce gostaria?";
    //printf("%s. %s", nome_2, msg);
    puts(nome_2);
    puts(msg);

    // comparação entre strings
    int comp_strcmp, comp_str;
    char nome_3[20];
    printf("Digite seu nome: ");
    scanf("%s", nome_3);
    comp_strcmp = strcmp(nome_2, nome_3);

    comp_str =nome_2 == nome_3;
    strcmp(nome_2, msg);
    printf("A comparacao e: %d e %d ", comp_strcmp, comp_str);

    return 0;
}

