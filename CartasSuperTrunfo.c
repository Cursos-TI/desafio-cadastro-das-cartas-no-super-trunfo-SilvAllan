#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Carta 1
    printf("Estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Nome da cidade 1: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Area da cidade 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos da cidade 1: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nEstado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Nome da cidade 2: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Area da cidade 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos da cidade 2: ");
    scanf("%d", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}