#include <stdio.h>

int main() {

    //Declaração de variáveis Carta 1 e Carta 2.
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, turisticos1, turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2;

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
    superpoder1 = populacao1 + area1 + pib1 + turisticos1 + percapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + percapita2 + (1 / densidade2);

    //Comparações.
    printf("\n *** Comparação das Cartas *** \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;

}