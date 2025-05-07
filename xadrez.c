#include <stdio.h>

//Função Recursiva para imprimir a movimentação das peças!
void torreRecursivo(int torreR) {
    if (torreR > 0){
        printf("Direita\n");
        torreRecursivo(torreR - 1);
    }
}


void bispoRecursivo(int i){
  
    for(i = 1; i <= 5; i++)
    printf("Cima, direita\n ");
    {
        for(i = 1; i <= 5; i++)
      

        printf("\n");
    }

}


void rainhaRecursivo(int rainhaR){
    if (rainhaR > 0){
        printf("Esquerda\n");
        rainhaRecursivo(rainhaR - 1);
    }
}

void cavaloRecursivo(int cima){
    int direita;
    for(cima = 1; cima <= 2; cima++)
    printf("Cima\n");
    {
        for(direita = 1; direita <= 1; direita++)
        {
            printf("Direita");
            
        }

        printf("\n");
    }

}


//-----------------------VARIAVEIS------------------------------

int main(){

    int i = 0, voltar; 
    int idade, escolha, escolhaCavalo, resultado;
    int torre = 5, bispo = 5, rainha = 8;
    int cavalo = 1;
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
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    scanf("%d", &escolha);


    //Switch - Escolha de opções e Calcúlo das condições

    switch (escolha)
    {

   
    case 1:
    //Aqui foi usado o Recursivo
        printf("Você escolheu Torre\n");
        printf("Voce moveu %d casas\n", torre);
        torreRecursivo(torre);       
    break;

    case 2:
    //Aqui foi usado o Recursivo porém -----------------------------------------
        printf("Você escolheu Bispo\n");
        printf("Voce moveu %d casas\n", bispo);
        bispoRecursivo(bispo);
        
    break;

    case 3:
    //Aqui foi usado o Recursivo e loops aninhados ---------------------------------------------------
        printf("Você escolheu Rainha\n");
        printf("Voce moveu %d casas\n", rainha);
        rainhaRecursivo(rainha);
        
    break;
  
    //Adicionei loops aninhados com múltiplas variáveis
    case 4:
        printf("Você escolheu Cavalo\n");
        cavaloRecursivo(cavalo);

    
    break;

    case 5:
    //Menu sair.........................................................
        printf("Saindo...\n");
        
    break;

    default:
        printf("Opção inválida, digite um número de 1 a 4!\n");
        break;
    }

    return 0;

}