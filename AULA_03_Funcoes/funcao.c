#include<stdio.h>

// Funções

void menu(){ //apenas void n precisa de return
    printf("--- MENU ---\n");
    printf("1 - Calculadora da media do aluno \n");
    printf("2 - verificador de presenca \n");
    printf("3 - Aprovacao.");

}

float media_aritmetica(float nota1, float nota2){
    // n1 e n2 são notas do aluno
    // med é a média artimética entre n1 e n2 
    //float med = (nota1 + nota2)/2;
    //return med;

    return (nota1 + nota2)/2;
}

void verificador_presenca(int p){
    // p é a presença / frequencia do aluno de 0 a 100
    if (p>= 75 && p <=100){
        printf("Aluno esta com presenca em dia! \n");
    }else if(p >=0 && p <=74){
        printf("Aluno esta com presenca pendente! \n");
    }else{
        printf("Valor de presenca invalida! \n");
    }
}

void aprovacao(float m){
    if (m >= 6 && m <=10){
        printf("APROVADO!");
    }else if (m >=  4 && m <6){
        printf("RECUPERAÇÃO");
    }else {
        printf("REPROVADO");
    }

}

int main(){
    // Declarações de variáveis
    int opcao, presenca;
    float media, nota_1, nota_2;
    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    switch (opcao){

        case 1: 
        printf("--- CALCULADORA DE MEDIA ---\n"); 
        printf("Digite sua primeira nota: \n ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        media = media_aritmetica(nota_1, nota_2);
        printf("A nota do aluno e: %.2f", media);

        break;

        case 2: printf("Selecionado opcao 2; \n");
        printf(" --- VERIFICADOR DE PRESENCA --- \n");
        printf("Digite a frequencia do aluno (0-100)");
        scanf("%d", &presenca);
        verificador_presenca(presenca);
        break;
        
        case 3:
        aprovacao(media);

        break;

        default: printf("Opção invalida!");
   
    }
    return 0;

}