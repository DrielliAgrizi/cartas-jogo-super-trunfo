#include <stdio.h>

// Criação nível básico de cartas para Jogo Super Trunfo
int main() {
    // Criação das variáveis representativas dos dados
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Dados da primeira carta
    printf("Insira uma letra de A a H para representar o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o código de três dígitos da carta 1 (ex.: A12): ");
    scanf("%3s", codigo1);

    printf("Insira a cidade da carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Insira a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Insira a área da carta 1 (em KM²): ");
    scanf("%f", &area1);

    printf("Insira o PIB da carta 1 (em R$): ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Dados da segunda carta
    printf("Insira uma letra de A a H para representar o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código de três dígitos da carta 2 (ex.: A12): ");
    scanf("%3s", codigo2);

    printf("Insira a cidade da carta 2 (em KM²): ");
    scanf(" %[^\n]", cidade2);

    printf("Insira a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Insira a área da carta 2 (em KM²): ");
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2 (em R$): ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Impressão dos valores de cada carta
    printf("\nAs cartas são as seguintes:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f Km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}