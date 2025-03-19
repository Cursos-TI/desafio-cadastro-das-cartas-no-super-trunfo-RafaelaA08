#include <stdio.h>
int main (){

char carta [30]; //Codigo_da_carta
char estado [30]; //Nome_do_estado
char cidade [30]; //Nome_da_cidade 
int populacao; //Quantidade_de_habitantes
int pontos; //Quantidade_de_pontos_turisticos
float area; //Valor_da_area_em_km_quadrados
float PIB; //Valor_do_PIB

    printf("Bem Vindo ao jogo Super Trunfo, nessa primeira etapa voce deve cadastrar informacoes de duas cartas, entao vamos la: \n");
    printf("Digite os dados da primeira carta: \n");

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta);

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%f", &populacao);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Digite o valor da area em km quadrados: \n");
    scanf("%f", &area);

    printf("Digite o valor PIB: \n");
    scanf("%f", &PIB);


char carta2 [30]; //Codigo_da_carta
char estado2 [30]; //Nome_do_estado
char cidade2 [30]; //Nome_da_cidade
int populacao2; //Quantidade_de_habitantes
int pontos2; //Quantidade_de_pontos_turisticos
float area2; //Valor_da_area_em_km_quadrados
float PIB2; //Valor_do_PIB

    printf("Digite o valor da segunda carta: \n");

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", carta2);

    printf("Digite o nome do Estado 2: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%f", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos2);

    printf("Digite o valor da area em km quadrados: \n");
    scanf("%d", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%d", &PIB2);

    return 0;



}