#include <stdio.h> 
#include <string.h>

int main() {

    int numPointTuristic1, populacao1, numPointTuristic2, populacao2;\
    float pib1, areaEmKm21, pib2, areaEmKm22;
    char nomeCidade1[30];
    char nomeCidade2[30];
    char letraEstado1;
    char letraEstado2;
    char codigoCarta1[4];
    char codigoCarta2[4];

    printf("Carta 1:\n");
    printf("Defina a letra do Estado (de A - H): ");
    scanf("%c", &letraEstado1);
    printf("Defina o código da carta (3 letras): ");
    scanf("%s", codigoCarta1);
    printf("Defina o nome da cidade: ");
    scanf(" ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); //fgets para strings com espaços
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; //utilizado para remover o \n que é adicionado pelo fgets
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

    printf("Informações da carta 1:\n");
    printf("Estado: %c\n", letraEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", areaEmKm21);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numPointTuristic1);
    
    printf("\n\n");

    printf("Informações da carta 2:\n");
    printf("Estado: %c\n", letraEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", areaEmKm22);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPointTuristic2);
    
    return 0;
    



}
