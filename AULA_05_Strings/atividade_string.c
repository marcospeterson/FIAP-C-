#include<stdio.h>
#include<string.h>

int main(){
    /* Autenticação de Usuário
    
        Se o user --> Ok, Acesso Liberado!
        Senão Acesso Negado
    
    
    */
    char user_name[20];
    printf("--- LOGIN ---\n");
    printf("USER NAME: ");
    scanf("%s", user_name);

    //int tamanho;
    //printf("%d\n", strlen(user_name));
    //printf("%d", strlen("admin"));
    //printf("%d", ((user_name == "admin") == 0));

    if(strcmp(user_name, "admin") == 0){ // Não façam comparações diretas user_name == "admin"
        printf("Acesso Liberado!");
    }else{
        printf("Acesso Negado!");
    }

    return 0;
}