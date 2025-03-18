#include <stdio.h>

struct Cidade {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Primeira Cidade:\n");
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área: ");
    scanf("%f", &cidade1.area);
    printf("PIB: ");
    scanf("%f", &cidade1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    // Cadastro da segunda cidade
    printf("\nCadastro da Segunda Cidade:\n");
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área: ");
    scanf("%f", &cidade2.area);
    printf("PIB: ");
    scanf("%f", &cidade2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    // Exibição dos dados
    printf("\nDados da Primeira Cidade:\n");
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f\n", cidade1.area);
    printf("PIB: %.2f\n", cidade1.pib);
    printf("Número de pontos turísticos: %d\n", cidade1.pontos_turisticos);

    printf("\nDados da Segunda Cidade:\n");
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f\n", cidade2.area);
    printf("PIB: %.2f\n", cidade2.pib);
    printf("Número de pontos turísticos: %d\n", cidade2.pontos_turisticos);

    return 0;
}