#include <stdio.h>
#include <string.h>

int main()
{

    int numPointTuristic1, numPointTuristic2;
    float pib1, areaEmKm21, pib2, areaEmKm22, resultadoPopulacionalC1, resultadoPopulacionalC2, resultadoPib1, resultadoPib2, superPoder;
    char nomeCidade1[30];
    char nomeCidade2[30];
    char letraEstado1;
    char letraEstado2;
    char codigoCarta1[4];
    char codigoCarta2[4];
    unsigned long int populacao1, populacao2;

    printf("Carta 1:\n");
    printf("Defina a letra do Estado (de A - H): ");
    scanf("%c", &letraEstado1);
    printf("Defina o código da carta (3 letras): ");
    scanf("%s", codigoCarta1);
    printf("Defina o nome da cidade: ");
    scanf(" ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // fgets para strings com espaços
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;    // utilizado para remover o \n que é adicionado pelo fgets
    printf("Defina a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Defina a área da cidade em km2: ");
    scanf("%f", &areaEmKm21);
    printf("Defina o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Defina o número de pontos turísticos da cidade: ");
    scanf("%d", &numPointTuristic1);

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Defina a letra do Estado (de A - H): ");
    scanf(" %c", &letraEstado2);
    printf("Defina o código da carta (3 letras): ");
    scanf("%s", codigoCarta2);
    printf("Defina o nome da cidade: ");
    scanf(" ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Defina a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Defina a área da cidade em km2: ");
    scanf("%f", &areaEmKm22);
    printf("Defina o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Defina o número de pontos turísticos da cidade: ");
    scanf("%d", &numPointTuristic2);
    printf("\n\n");

    resultadoPopulacionalC1 = (float)populacao1 / areaEmKm21;
    resultadoPopulacionalC2 = (float)populacao2 / areaEmKm22;
    resultadoPib1 = (float)pib1 / populacao1;
    resultadoPib2 = (float)pib2 / populacao2;

    printf("Informações da carta 1:\n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", areaEmKm21);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numPointTuristic1);
    printf("A densidade populacional é aproximadamente: %.2f habitantes/km2\n", resultadoPopulacionalC1);
    printf("O PIB per capita é aproximadamente: %.2f\n", resultadoPib1);

    printf("\n\n");

    printf("Informações da carta 2:\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", areaEmKm22);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPointTuristic2);
    printf("A densidade populacional é aproximadamente: %.2f habitantes/km2\n", resultadoPopulacionalC2);
    printf("O PIB per capita é aproximadamente: %.2f\n", resultadoPib2);
    printf("\n\n");

    // Comparação das carta

    // superPoder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade populacional)
    superPoder = (float)populacao1 + areaEmKm21 + pib1 + numPointTuristic1 + resultadoPib1 + (1.0f / resultadoPopulacionalC1);
    float superPoder2 = (float)populacao2 + areaEmKm22 + pib2 + numPointTuristic2 + resultadoPib2 + (1.0f / resultadoPopulacionalC2);

    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", 2 - (populacao1 > populacao2), populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", 2 - (areaEmKm21 > areaEmKm22), areaEmKm21 > areaEmKm22);
    printf("PIB: Carta %d venceu (%d)\n", 2 - (pib1 > pib2), pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (numPointTuristic1 > numPointTuristic2), numPointTuristic1 > numPointTuristic2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (resultadoPopulacionalC1 < resultadoPopulacionalC2), resultadoPopulacionalC1 < resultadoPopulacionalC2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (resultadoPib1 > resultadoPib2), resultadoPib1 > resultadoPib2);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (superPoder > superPoder2), superPoder > superPoder2);

    return 0;
}
