#include <stdio.h>

int main () {
    printf("Desafio de nível novato baseado na aula de fundamentos em C \n ");

    //Declaração de variáveis da primeira carta:
    
    char estado_1;
    char codcarta_1[10];
    char nome_cidade1[20];
    int popul1;
    float areakm1;
    float pib1;
    int ponto_tur1;

    //Declaração de variáveis da segunda carta:

    char estado_2;
    char codcarta_2[10];
    char nome_cidade2[20];
    int popul2;
    float areakm2;
    float pib2;
    int ponto_tur2;

    // Inserção de dados da primeira carta:

    printf("Agora você irá inserir os dados da primeira carta. \n");
    
    printf("Digite a primeira letra do estado: ");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: ");
    scanf(" %s", &codcarta_1);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 20, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("Digite a população desta cidade: ");
    scanf("%d", &popul1);

    printf("Digite a área desta cidade: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &ponto_tur1);

    printf("Exbindo agora os dados da primeira carta. \n");

    printf("Estado: %c \n", estado_1);

    return 0;
}