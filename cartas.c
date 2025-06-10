#include <stdio.h>

int main() {
    char estado[50];
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Nome do estado: ");
    scanf("%s", estado);

    printf("Codigo da cidade: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("Quantidade de pessoas: ");
    scanf("%d", &populacao);

    printf("Tamanho da cidade (em km²): ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta da cidade criada ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}