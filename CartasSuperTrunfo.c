#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Variaveis da primeira carta;
    char carta[15];
    char nome1[30];
    char codigo1[5];
    char cidade1[30];
    int populacao1;
    float area1;
    float PIB1;
    int numero1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Solicitção dos dados do usuário para primeira carta;

    printf("Informe o nome da carta: ");
    scanf("%s", carta);
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
    scanf("%f", &PIB1);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numero1);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Leitura dos dados fornecidos pelo usuário para primeira carta;
    
    printf("Carta: %s\n", carta);
    printf("O nome do estado é: %s\n", nome1);
    printf("O código da carta é: %s\n", codigo1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A população tem: %d\n", populacao1);
    printf("a área da cidade é de: %.3fKM² \n", area1);
    printf("O PIB da cidade é de: %.3f\n", PIB1);
    printf("pontos turiscos: %d\n", numero1);

    //Variaveis da segunda carta;

    char carta2[15];
    char nome2[30];
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int numero2;

    //Solicitção dos dados do usuário para Segunda carta;
    
    printf("Informe o nome da carta: ");
    scanf("%s", carta2);
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
    scanf("%f", &PIB2);
    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &numero2);

     //Leitura dos dados fornecidos pelo usuário para segunda carta;
    
    printf("Carta: %s\n", carta2); 
    printf("O nome do estado é: %s\n", nome2);
    printf("O código da carta é: %s\n", codigo2);
    printf("O nome da cidade é: %s\n", cidade2);
    printf("A população tem: %d\n", populacao2);
    printf("a área da cidade é de: %.3fKM² \n", area2);
    printf("O PIB da cidade é de: %.3f\n", PIB2);
    printf("pontos turiscos: %d\n", numero2);

    return 0;
}
