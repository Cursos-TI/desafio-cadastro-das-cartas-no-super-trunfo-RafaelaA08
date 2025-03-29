#include <stdio.h>
int main (){

//Instruções para cadastrar a carta 1
char carta [30]; //Codigo_da_carta
char estado [30]; //Nome_do_estado
char cidade [30]; //Nome_da_cidade 
int populacao; //Quantidade_de_habitantes
int pontos; //Quantidade_de_pontos_turisticos
float area; //Valor_da_area_em_km_quadrados
float PIB; //Valor_do_PIB
float densidade_populacional; //Densidade_populacional
float PIB_per_capita; //PIB_per_capita

    //Inicio do jogo
    printf("Bem Vindo ao jogo Super Trunfo, nessa primeira etapa voce deve cadastrar informacoes de duas cartas, entao vamos la: \n");
    printf("Digite os dados da primeira carta: \n");

    //Cadastro da primeira carta 
    printf("Digite o codigo da carta: \n");
    scanf("%s", carta);

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Digite o valor da area em km quadrados: \n");
    scanf("%f", &area);

    printf("Digite o valor PIB: \n");
    scanf("%f", &PIB);

    //Calculo densidade popolacional da carta 1
    densidade_populacional = (populacao / area);
    printf("A densidade populacional da cidade é: %.2f \n", densidade_populacional);

    //Calculo PIB per capita carta 1
    PIB_per_capita = (PIB / populacao);
    printf("O PIB per capita da cidade é: %.2f \n", PIB_per_capita);

//Instruções para cadastrar a carta 2
char carta2 [30]; //Codigo_da_carta
char estado2 [30]; //Nome_do_estado
char cidade2 [30]; //Nome_da_cidade
int populacao2; //Quantidade_de_habitantes
int pontos2; //Quantidade_de_pontos_turisticos
float area2; //Valor_da_area_em_km_quadrados
float PIB2; //Valor_do_PIB
float densidade_populacional2; //Densidade populacional
float PIB_per_capita2; //PIB_per_capita

    printf("Digite o valor da segunda carta: \n");

    //Cadastro da segunda carta
    printf("Digite o codigo da carta 2: \n");
    scanf("%s", carta2);

    printf("Digite o nome do Estado 2: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos2);

    printf("Digite o valor da area em km quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB2);

    //Calculo da densidade populacional da carta 2
    densidade_populacional2 = (populacao2 / area2);
    printf("A densidade populacional da cidade 2 é: %.2f \n", densidade_populacional2);

    //Calculo PIB per capita da carta 1
    PIB_per_capita2 = (PIB2 / populacao2);
    printf("O PIB per capita da cidade 2 é: %.2f \n", PIB_per_capita2);

    return 0;

}