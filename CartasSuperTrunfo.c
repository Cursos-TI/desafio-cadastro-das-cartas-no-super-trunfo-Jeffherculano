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
    float denspop1 = (float) popul1 / areakm1;
    float pibcpt1 = (float) pib1 / popul1;

    //Declaração de variáveis da segunda carta:

    char estado_2;
    char codcarta_2[10];
    char nome_cidade2[20];
    int popul2;
    float areakm2;
    float pib2;
    int ponto_tur2;
    float denspop2 = (float) popul2 / areakm2;
    float pibcpt2 = (float) pib2 / popul2;

    // Inserção de dados da primeira carta:

    printf("Agora você irá inserir os dados da primeira carta. \n");
    
    printf("Digite a primeira letra do estado: ");
    scanf("%c", &estado_1);

    printf("Digite o código da carta: ");
    scanf("%s", &codcarta_1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1,20,stdin);

    printf("Digite a população desta cidade: ");
    scanf("%d", &popul1);

    printf("Digite a área desta cidade em quilômetros: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB em bilhões desta cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &ponto_tur1);

// Preciso inserir a declaração e o cálculo da densidade populacional e do PIB per Capita aqui, se não da erro.

    float denspop1 = (float)popul1 / areakm1;
    float pibcpt1 = (pib1 * 1e9) / (float)popul1; //Aqui acontece a conversão de bilhões para reais.

// As próximas linhas apenas mostram os dados da primeira carta que foram inseridos, além da densidade populacional e PIB per Capita.

    printf("Exbindo agora os dados da primeira carta. \n");
    printf("Estado: %c \n O código da carta: %s \n O nome da cidade: %s", estado_1, codcarta_1, nome_cidade1);
    printf("A população da cidade é: %d \n A área desta cidade em quilômetros é: %.2fkm² \n", popul1, areakm1);
    printf("O PIB desta cidade é: %.2f Bilhões de reais. \n A quantidade de pontos turísticos nesta cidade é: %i \n", pib1, ponto_tur1);
    printf("A densidade populacional da cidade é: %.2f hab/km². \n O PIB per Capita da cidade é: %.2f reais.", denspop1, pibcpt1);


// Agora será a inserção de dados da segunda carta.

    printf("Agora você irá inserir os dados da segunda carta. \n");
    getchar();
    
    printf("Digite a primeira letra do estado: ");
    scanf("%c", &estado_2);

    printf("Digite o código da carta: ");
    scanf("%s", &codcarta_2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2,20,stdin);

    printf("Digite a população desta cidade: ");
    scanf("%d", &popul2);

    printf("Digite a área desta cidade em quilômetros: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB em bilhões desta cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos nesta cidade: ");
    scanf("%d", &ponto_tur2);

// Mesmo caso la de cima, agora pra segunda carta

   float denspop2 = (float)popul2 / areakm2;
   float pibcpt2 = (pib2 * 1e9) / (float)popul2;


// Agora será a visualização de dados da segunda carta, além da densidade populacional e PIB per Capita.
    
    printf("Exbindo agora os dados da segunda carta. \n");
    printf("Estado: %c \n O código da carta: %s \n O nome da cidade: %s", estado_2, codcarta_2, nome_cidade2);
    printf("A população da cidade é: %d \n A área desta cidade em quilômetros é: %.2fkm² \n", popul2, areakm2);
    printf("O PIB desta cidade é: %.2f Bilhões de reais. \n A quantidade de pontos turísticos nesta cidade é: %i", pib2, ponto_tur2);
    printf("A densidade populacional da cidade é: %.2f hab/km². \n O PIB per Capita da cidade é: %.2f reais.", denspop1, pibcpt1);   

    return 0;
}