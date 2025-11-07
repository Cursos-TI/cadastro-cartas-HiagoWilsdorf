#include <stdio.h>

int main() {
    // Declaração das variáveis das duas cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char Cidade1[50], Cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float PibperCapita1, PibperCapita2;

    printf("=== SUPER TRUNFO - PAISES (Nivel Aventureiro) ===\n\n");

    // ======== CARTA 1 ========
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: (A-H)");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    PibperCapita1 = (pib1 * 1000000000) / populacao1; // PIB está em bilhões

    // ======== CARTA 
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: (A-H)");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    densidade2 = populacao2 / area2;
    PibperCapita2 = (pib2 * 1000000000) / populacao2;


    printf("\n\n=== RESULTADOS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PibperCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PibperCapita2);

    return 0;
}