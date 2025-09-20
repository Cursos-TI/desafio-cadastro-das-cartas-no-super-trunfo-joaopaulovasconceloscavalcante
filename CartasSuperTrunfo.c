#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    
    //Variáveis Carta01;

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
    int opcao;

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


    //Solicitção dos dados do usuário Carta01;

    printf("###MENU PRINCIPAL###\n");
    printf("1 Iniciar Jogo\n");
    printf("2 SAIR!\n");
    printf("Escolha uma Opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        
        //Solicitção dos dados do usuário Carta01;
        printf("***JOGO INICIDADO***\n");
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

        //Leitura e exibição dos dados fornecidos pelo usuário Carta01;

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

        //Solicitção dos dados do usuário Carta02;
    
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

        //Leitura e exibição dos dados fornecidos pelo usuário Carta02;
    
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
        
        if (populacao_1 > populacao_2) {   
            printf("##POPULÇÃO: %s VENCEU!##\n", cidade_1);
           } else if (populacao_1 < populacao_2){
            printf("##POPULAÇÃO: %s VENCEU!##\n", cidade_2);
           } else {  
            printf("##POPULAÇÃO: EMPATE!##");
        } if (area_1 > area_2) {
            printf("##ÁREA: %s VENCEU!##\n", cidade_1);
           } else if (area_1 < area_2) {
            printf("##ÁREA: %s VENCEU!##\n", cidade_2);
           } else {
            printf("##ÁREA:EMPATE!##\n");
        } if (pib_1 > pib_2) {      
            printf("##PIB: %s VENCEU!##\n", cidade_1);
           } else if (pib_1 < pib_2) {  
            printf("##PIB: %s VENCEU!##\n", cidade_2);
           } else {
            printf("##PIB: EMPATE!##\n");
        } if (pontos_turisticos_1 > pontos_turisticos_2) {
            printf("##PONTOS TURISTICOS: %s VENCEU!##\n", cidade_1);
           } else if (pontos_turisticos_1 < pontos_turisticos_2) {
            printf("##PONTOS TURISTICOS: %s VENCEU!##\n", cidade_2);
           } else {
            printf("##PONTOS TURISTICOS: EMPATE!##\n");
        } if (densidade_1 < densidade_2) {
            printf("##DENSIDADE POPULACIONAL: %s VENCEU!##\n", cidade_1);
           } else if (densidade_1 > densidade_2) {
            printf("##DENSIDADE POPULACIONAL: %s VENCEU!##\n", cidade_2);
           } else {
            printf("##DENSIDADE POPULACIONAL: EMPATE!##\n");
        }if (pib_percapita_1 > pib_percapita_2) {
            printf("##PIB PER CAPITA: %s VENCEU!##\n", cidade_1);
           } else if (pib_percapita_1 < pib_percapita_2) {
            printf("##PIB PER CAPITA: %s VENCEU!##\n", cidade_2);
           } else {     
            printf("##PIB PER CAPITA: EMPATE!##\n");
        }if (super_poder_1 > super_poder_2) {
            printf("##SUPER PODER: %s VENCEU!##\n",cidade_1);
           } else if (super_poder_1 < super_poder_2) {
            printf("##SUPER PODER: %s VENCEU!##\n", cidade_2);
           } else {
            printf("##SUPER PODER: EMPATE!##\n");  
        }break;

    case 2:
        printf("SAIR DO JOGO!\n");
        break;

    default:
        printf("Opção Inválida!");
        break;

}
    return 0;
}
