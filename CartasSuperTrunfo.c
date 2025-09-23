#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados da carta
    char Codigo[4]; // Ex: A01, B02...
    int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;

    // Entrada dos dados
    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n");
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", Codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &Pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos);

    // Saída dos dados
    printf("\n=== Dados da Carta Cadastrada ===\n");
    printf("Codigo: %s\n", Codigo);
    printf("Populacao: %d habitantes\n", Populacao);
    printf("Area: %.2f km2\n", Area);
    printf("PIB: %.2f bilhoes\n", Pib);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    return 0;
}