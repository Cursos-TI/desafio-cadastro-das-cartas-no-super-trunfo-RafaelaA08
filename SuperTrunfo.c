#include <stdio.h>
int main (){

//Instruções para cadastrar a carta 1
char carta [30]; //Codigo_da_carta
char estado [30]; //Nome_do_estado
char cidade [30]; //Nome_da_cidade 
unsigned long int populacao; //Quantidade_de_habitantes
int pontos; //Quantidade_de_pontos_turisticos
float area; //Valor_da_area_em_km_quadrados
float PIB; //Valor_do_PIB
float densidade_populacional; //Densidade_populacional
float PIB_per_capita; //PIB_per_capita
float super_poder; //Super_poder

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
    scanf("%lu", &populacao);

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

    //Calculo do Super poder da carta 1
    super_poder = populacao + pontos + area + PIB + PIB_per_capita + 1 / densidade_populacional;
    printf("O super poder da carta 1 é: %.2f \n", super_poder);

//Instruções para cadastrar a carta 2
char carta2 [30]; //Codigo_da_carta
char estado2 [30]; //Nome_do_estado
char cidade2 [30]; //Nome_da_cidade
unsigned long int populacao2; //Quantidade_de_habitantes
int pontos2; //Quantidade_de_pontos_turisticos
float area2; //Valor_da_area_em_km_quadrados
float PIB2; //Valor_do_PIB
float densidade_populacional2; //Densidade_populacional
float PIB_per_capita2; //PIB_per_capita
float super_poder2; //Super_poder
char resultado; //Resultado_das_comparações

    printf("Digite o valor da segunda carta: \n");

    //Cadastro da segunda carta
    printf("Digite o codigo da carta 2: \n");
    scanf("%s", carta2);

    printf("Digite o nome do Estado 2: \n");
    scanf("%s", estado2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de habitantes: \n");
    scanf("%lu", &populacao2);

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

    //Calculo Super poder da carta 2
    super_poder2 = populacao2 + pontos2 + area2 + PIB2 + PIB_per_capita2 + 1 / densidade_populacional2;
    printf("O super poder da carta 2 é: %f\n", super_poder2);

    //Comparando cartas

    //População
    printf("A quantidade de habitantes da carta 1: %lu é maior que a quantidade de habitantes da carta 2: %lu?: %lu\n", populacao, populacao2, populacao > populacao2);
    resultado = populacao > populacao2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 
    
    //Pontos Turisticos 
    printf("A quantidade de pontos turisticos da carta 1: %d é maior que a quantidade de pontos turisticos da carta 2: %d?: %d\n", pontos, pontos2, pontos > pontos2);
    resultado = pontos > pontos2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado);

    //Área em km quadrados 
    printf("O valor da área em km quadrados da carta 1: %f é maior que a área em km quadrados da carta 2: %f?: %d\n", area, area2, area > area2);
    resultado = area > area2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 

    //PIB
    printf("O valor do PIB da carta 1: %f é maior que o PIB da carta 2: %f?: %d\n", PIB, PIB2, PIB > PIB2);
    resultado = PIB > PIB2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 

    //Densidade Populacional 
    printf("O valor da densidade populacional da carta 1: %.2f é menor que a densidade populacional da carta 2: %.2f?: %d\n", densidade_populacional, densidade_populacional2, densidade_populacional < densidade_populacional2);
    resultado = densidade_populacional < densidade_populacional2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 

    //PIB per capita 
    printf("O valor do PIB per capita da carta 1: %.2f é maior que o PIB per capita da carta 2: %.2f?: %d\n", PIB_per_capita, PIB_per_capita2, PIB_per_capita > PIB_per_capita2);
    resultado = PIB_per_capita > PIB_per_capita2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 

    //Super poder
    printf("O valor do super poder da carta 1: %.2f é maior que o super poder da carta 2: %.2f?: %d\n", super_poder, super_poder2, super_poder > super_poder2);
    resultado = super_poder > super_poder2;
    printf("A carta que ganhou a comparação nesse requesito foi a carta: %d\n", resultado); 



    return 0;


}