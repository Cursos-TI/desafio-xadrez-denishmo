#include <stdio.h>
#include <ctype.h>

int main(){

    int i = 0, voltar; 
    int idade, escolha, resultado;
    int torre, bispo, rainha;
    char nome[20];


    // Menu interativo
    printf("Bem-vindo ao jogo de Xadrez!\n");
    printf("Digite seu primeiro nome:\n");
    scanf("%s", &nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Cadastro realizado com sucesso!\n\n");
    printf("Escolha uma peça para mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Sair\n");
    scanf("%d", &escolha);


    //Switch - Escolha de opções e Calcúlo das condições

    switch (escolha)
    {

   
    case 1:
    //Aqui foi usado o For ------------------------------------------
        printf("Você escolheu Torre\n");
        printf("Quantas casas deseja mover? 1 a 5\n");
        scanf("%d", &torre);

       
        if (torre <= 5){
            printf("Você moveu %d casas\n", torre);
        for  (int i = 0; i < torre; i++)
        {
            printf("Direita\n");
        }
        } else {
            printf("Número inválido, Digite um número de 1 a 5\n");
        }
    break;

    case 2:
    //Aqui foi usado o do while -----------------------------------------
        printf("Você escolheu Bispo\n");
        printf("Quantas casas deseja mover? 1 a 5\n");
        scanf("%d", &bispo);
        printf("Você moveu %d casas\n", bispo);

        do
        {
        if(bispo <= 5){
            printf("Cima, Direita\n");
            i++;
            
        } else {
            printf("Número inválido, Digite um número de 1 a 5\n");
        }
  
        } while (i < bispo);
    break;

    case 3:
    //Aqui foi usado o while ---------------------------------------------------
        printf("Você escolheu Rainha\n");
        printf("Quantas casas deseja mover? 1 a 8\n");
        scanf("%d", &rainha);
        printf("Você moveu %d casas\n", rainha);

        if(rainha <= 8){
            while (i < rainha)
        {
            printf("Esquerda\n");
            i++;
        }
        } else {
            printf("Número inválido, Digite um número de 1 a 8\n");
        }
        
    break;

    case 4:
    //Menu sair.........................................................
        printf("Saindo...\n");
        
    break;

    default:
        printf("Opção inválida, digite um número de 1 a 4!\n");
        break;
    }

    return 0;

}