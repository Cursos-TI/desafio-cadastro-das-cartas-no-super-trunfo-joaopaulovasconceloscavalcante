#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[30];
    char codigo[5];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int numero;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Informe o nome do estado:");
    scanf("%s", nome);
    printf("Informe o código da carta:");
    scanf("%s", codigo);
    printf("Informe o nome da cidade:");
    scanf("%s", cidade);
    printf("Informe o tamanho da população:");
    scanf("%d", &populacao);
    printf("Informe a área da cidade:");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB);
    printf("Informe o numero de pontos turisticos:");
    scanf("%d", &numero);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("O nome do estado é: %s\n", nome);
    printf("O código da carta é: %s\n", codigo);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A população tem: %d\n", populacao);
    printf("a área da cidade é de: %.3f\n", area);
    printf("O PIB da cidade é de: %.3f\n", PIB);
    printf("pontos turiscos: %d\n", numero);


    printf("Informe o nome do estado:");
    scanf("%s", nome);
    printf("Informe o código da carta:");
    scanf("%s", codigo);
    printf("Informe o nome da cidade:");
    scanf("%s", cidade);
    printf("Informe o tamanho da população:");
    scanf("%d", &populacao);
    printf("Informe a área da cidade:");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB);
    printf("Informe o numero de pontos turisticos:");
    scanf("%d", &numero);

    printf("O nome do estado é: %s\n", nome);
    printf("O código da carta é: %s\n", codigo);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A população tem: %d\n", populacao);
    printf("a área da cidade é de: %.3f\n", area);
    printf("O PIB da cidade é de: %.3f\n", PIB);
    printf("pontos turiscos: %d\n", numero);

    return 0;
}
