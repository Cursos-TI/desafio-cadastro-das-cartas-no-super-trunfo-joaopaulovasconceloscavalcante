#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Variaveis da primeira carta;

    char nome_1[30];
    char codigo_1[5];
    char cidade_1[30];
    float populacao_1;
    float area_1;
    double pib_1;
    int pontos_turisticos_1;
    float densidade_1;
    float pib_percapita_1;
    float super_poder_1;

    //Solicitção dos dados do usuário para primeira carta;
    
    printf("Informe o nome do estado: ");
    scanf(" %29[^\n]", nome_1);
    printf("Informe o código da carta: ");
    scanf(" %4s", codigo_1);
    printf("Informe o nome da cidade: ");
    scanf(" %29[^\n]", cidade_1);
    printf("Informe o tamanho da população: ");
    scanf("%f", &populacao_1);
    printf("Informe a área da cidade: ");
    scanf("%f", &area_1);
    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib_1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);
    
    //Leitura e exibição dos dados fornecidos pelo usuário para primeira carta;
    printf("**CARTA-1**\n");
    printf("Estado: %s\n", nome_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %.2f habitantes\n", populacao_1);
    printf("Área: %.2f KM²\n", area_1);
    printf("PIB: %.2lf R$\n", pib_1);
    printf("Pontos Turiscos: %d\n", pontos_turisticos_1);
    
    densidade_1 = (float) populacao_1 / area_1;
    pib_percapita_1 = (float) pib_1  / populacao_1;
    super_poder_1 = (float) populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_percapita_1 + (1 / densidade_1);
    
    printf("Densidade Populacional: %.2f hab/KM²\n", densidade_1);
    printf("PIB per Capita: %.2f R$/hab\n", pib_percapita_1);
    printf("Super Poder: %.2f\n",super_poder_1);

    //Variaveis da segunda carta;

    char nome_2[30];
    char codigo_2[5];
    char cidade_2[30];
    float populacao_2;
    float area_2;
    double pib_2;
    int pontos_turisticos_2;
    float densidade_2;
    float pib_percapita_2;
    float super_poder_2;

    //Solicitção dos dados do usuário para Segunda carta;
    
    printf("Informe o nome do estado: ");
    scanf(" %29[^\n]", nome_2);
    printf("Informe o código da carta: ");
    scanf("%s", codigo_2);
    printf("Informe o nome da cidade: ");
    scanf(" %29[^\n]", cidade_2);
    printf("Informe o tamanho da população: ");
    scanf("%f", &populacao_2);
    printf("Informe a área da cidade: ");
    scanf("%f", &area_2);
    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib_2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);

     //Leitura e exibição dos dados fornecidos pelo usuário para segunda carta;
    
    printf("**CARTA-2**\n");
    printf("Estado: %s\n", nome_2);
    printf("Código: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %.2f habitantes\n", populacao_2);
    printf("Área: %.2f KM²\n", area_2);
    printf("PIB: %.2lf R$\n", pib_2);
    printf("Pontos Turiscos: %d\n", pontos_turisticos_2);
    
    densidade_2 = (float) populacao_2 / area_2;
    pib_percapita_2 = (float) pib_2 / populacao_2;
    super_poder_2 = (float) populacao_2 + area_2 + pib_2 + pontos_turisticos_1 + pib_percapita_2 + (1 / densidade_2);

    printf("Densidade Populacional: %.2f hab/KM²\n", densidade_2);
    printf("PIB per Capita: %.2f R$/hab\n", pib_percapita_2);
    printf("Super Poder: %.2f\n",super_poder_2);
    
   //Variaveis da comparacação das cartas

    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_ponto_turistico;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;

    resultado_populacao = populacao_1 > populacao_2;
    resultado_area = area_1 > area_2;
    resultado_pib = pib_1 > pib_2;
    resultado_ponto_turistico = pontos_turisticos_1 > pontos_turisticos_2;
    resultado_densidade = densidade_1 > densidade_2;
    resultado_pib_per_capita = pib_percapita_1 > pib_percapita_2;
    resultado_super_poder = super_poder_1 > super_poder_2;

     //comparação das cartas

     if (populacao_1 > populacao_2){
        printf("População: CARTA1 Venceu!\n");
     } else {
        printf("População: CARTA2 Venceu!\n");
    }
     if (area_1 > area_2) {
        printf("Área: CARTA1 Venceu!\n");
     } else {
        printf("Área: CARTA2 Venceu!\n");
    }
    if(pib_1 > pib_2) {
        printf("PIB: CARTA1 Venceu!\n");
    } else{
        printf("PIB: CARTA2 Venceu!\n");
    }
    if(pontos_turisticos_1 > pontos_turisticos_2) {
        printf("Pontos Turisticos: CARTA1 Venceu!\n");
    } else {
        printf("Pontos Turisticos: CARTA2 Venceu!\n");
    }
    if(densidade_1 > densidade_2) {
        printf("Densidade Populacional: CARTA1 Venceu!\n");
    } else {
        printf("Densidade populacional: CARTA2 Venceu!\n");
    }
    if(pib_percapita_1 < pib_percapita_2) {
        printf("PIB Per Capita: CARTA1 Venceu!\n");
    } else {
        printf("PIB Per Capita: CARTA2 Venceu\n");
    }
    if(super_poder_1 > super_poder_2) {
        printf("Super Poder: CARTA1 Venceu!\n");
    } else {
        printf("Super Poder: CARTA Venceu!\n");
    }

    //printf("A população da Carta 1 é maior que da Carta 2? %d\n", resultado_populacao);
    //printf("A Área da Carta 1 é maior que da Carta 2? %d\n", resultado_area);
    //printf("O PIB da Carta 1 é maior que o da Carta 2? %d\n", resultado_pib);
    //printf("A Carta 1 tem mais Pontos Turisticos que a Carta 2? %d\n", resultado_ponto_turistico);
    //printf("A Densidade Populacional da Carta 1 é maior que da Carta 2? %d\n", resultado_densidade);
    //printf("O PIB Per Capita da Carta 1 é maior que da Carta 2? %d\n", resultado_densidade);
    //printf("O Super Poder da Carta 1 é maior que da Carta 2? %d\n", resultado_super_poder);

    return 0;
}
