#include <stdio.h>

int main() {

    //Declaração de variáveis Carta 1 e Carta 2.
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;


    //Entrada de dados da Carta 1.
    printf("Cadastro da Carta 1:\n");

    printf("Estado A-B: ");
    scanf(" %c", &estado1);
    
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    //Entrada de dados Carta 2.
    printf("Cadastro da Carta 2:\n");

    printf("Estado A-B: ");
    scanf(" %c", &estado2);
    
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turisticos2);

    //Cálculo densidade e pib per capita.
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    //Exibição dos dados.
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populaçã: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", percapita1);

    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populaçã: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", percapita2);


    return 0;
}