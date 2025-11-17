#include <stdio.h>
#include <string.h>

int main() {

    // Estrutura de dados para armazenar as cartas

    char estado1[50], codigo1[50], nome1[50];
    int populacao1, PontosTuristicos1;
    float area1, pib1;

    char estado2[50], codigo2[50], nome2[50];
    int populacao2, PontosTuristicos2;
    float area2, pib2;

    // Cadastro da Carta 1

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cadastro da Carta 2

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculos

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1000000000.0 / populacao1;
    float pibPerCapita2 = pib2 * 1000000000.0 / populacao2;

    // Atributo escolhido

    float atributo1 = pibPerCapita1;  
    float atributo2 = pibPerCapita2;
    char atributoNome[] = "PIB per capita";

    // Comparação

    printf("\n=== Comparacao de Cartas (Atributo: %s) ===\n\n", atributoNome);
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, atributo2);

    // Se o atributo for densidade, o menor vence

    if (strcmp(atributoNome, "Densidade Populacional") == 0) {
        if (atributo1 < atributo2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (atributo2 < atributo1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    // Para todos os outros atributos, o maior vence

    else {
        if (atributo1 > atributo2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (atributo2 > atributo1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
}