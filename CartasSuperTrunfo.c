#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Variaveis da primeira carta;

    char nome1[30];
    char codigo1[5];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numero1;
    float densidade1;
    float pib01;

    //Solicitção dos dados do usuário para primeira carta;
    
    printf("Informe o nome do estado: ");
    scanf("%s", nome1);
    printf("Informe o código da carta: ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Informe o tamanho da população: ");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade: ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numero1);
    
    //Leitura e exibição dos dados fornecidos pelo usuário para primeira carta;
    printf("**CARTA-1**\n");
    printf("O nome do estado é: %s\n", nome1);
    printf("O código da carta é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A população tem: %d\n", populacao1);
    printf("a área da cidade é de: %f KM²\n", area1);
    printf("O PIB da cidade é de: %f R$\n", pib1);
    printf("pontos turiscos: %d\n", numero1);
    
    densidade1 = (float) populacao1 / area1;
    pib01 = (float) pib1 / populacao1;

    printf("A densidade populacional é: %.2f hab/KM²\n", densidade1);
    printf("O PIB per capita é: %.2f R$/hab\n", pib01);
   
    //Variaveis da segunda carta;

    char nome2[30];
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numero2;
    float densidade2;
    float pib02;

    //Solicitção dos dados do usuário para Segunda carta;
    
    printf("Informe o nome do estado: ");
    scanf("%s", nome2);
    printf("Informe o código da carta: ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Informe o tamanho da população: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade: ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numero2);

     //Leitura e exibição dos dados fornecidos pelo usuário para segunda carta;
    
    printf("**CARTA-2**\n");
    printf("O nome do estado é: %s\n", nome2);
    printf("O código da carta é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n", cidade2);
    printf("A população tem: %d\n", populacao2);
    printf("a área da cidade é de: %f KM²\n", area2);
    printf("O PIB da cidade é de: %f R$\n", pib2);
    printf("pontos turiscos: %d\n", numero2);
    
    densidade2 = (float) populacao2 / area2;
    pib02 = (float) pib2 / populacao2;

    printf("A densidade populacional é: %.2f hab/KM²\n", densidade2);
    printf("O PIB per capita é de: %.2f R$/hab\n", pib02);

    return 0;
}
