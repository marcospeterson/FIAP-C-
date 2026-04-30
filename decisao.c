#include<stdio.h>

int main (){

    /* Fazer a análise da nota de alunos - média, presença e recuperação*/
    float nota_1;
    float nota_2;
    int presenca;

    /*  1 - Construir a interação com o usuário/ professor;
        2 - construir a aritmética da média das duas notas;
        3 - Exibir se o aluno está dentro das condições da estrutura IF
    */

    printf("--- CALCULADORA DE MEDIA E FALTA --- \n");
    printf("--- O aplicativo aceita somente 2 notas por vez --- \n ");
    printf("Bem-vindo professor, digite sua prmiera nota : ");
    scanf("%f", &nota_1);
    printf("Pronto! Digite a sua segunda nota: ");
    scanf("%f", &nota_2);
    printf("Agora, digite o percentual de forma inteira do aluno: ");
    scanf("%d", &presenca);
    //calcular a media do aluno

    float media = ((nota_1 + nota_2) / 2);
    printf("A média do aluno é: %.2f \n", media);
    

    if(media >9 && presenca > 80){
        printf("Aluno aprovado com execelência");
    }else if (media >= 6 && presenca >= 75){
        printf("Aluno Aprovado");
    }else if (media >4 && presenca >= 75){
        printf("Aluno em recuperação");
    }else if (media >= 6 && presenca <75){
        printf("Aluno reprovado por falta!");
    }else {
        printf("Aluno reprovado");
    }

    return 0;
}