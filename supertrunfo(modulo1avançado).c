#include <stdio.h>
#include <string.h>

int main(){
    char estado1, estado2;
    char codigo1 [20], codigo2 [20];
    char cidade1 [20], cidade2 [20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade_populacional1, densidade_populacional2; // Calcular população dividido pela area
    float pib_per_capita1, pib_per_capita2; // Calcular pib dividido pela populaçao
    float super_poder1, super_poder2;

    //CARTA 1.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    
    //Estado
    printf("Carta 1.\nDigite a letra inicial do seu Estado: \n");
    scanf(" %c", &estado1);

    //Código
    printf("Digite a letra inicial do seu Estado seguida de um número de 01 a 04 (ex: A01,B03): \n");
    scanf(" %s", &codigo1);

    //Nome da Cidade
    printf("Digite sua Cidade: \n");
    scanf(" %s", &cidade1);

    //População
    printf("Digite a População: \n");
    scanf(" %d", &populacao1);

    //Área
    printf("Digite a Área (em Km²): \n");
    scanf(" %f", &area1);

    //PIB
    printf("Digite o PIB (em Bilhões): \n");
    scanf(" %f", &pib1);

    //Pontos Turísticos
    printf("Digite os pontos turisticos: \n");
    scanf(" %d", &turistico1); 
    

    //IMPRIMIR CARTA 1.
    printf("\nEstado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    super_poder1 = populacao1 + area1 + pib1 + turistico1 + (1 / densidade_populacional1) + pib_per_capita1;
    printf("Super poder é: %.2f\n", super_poder1);
    

    //CARTA 2. @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    //Estado
    printf("\nCarta 2.\n");
    printf("Digite a letra inicial do seu Estado: \n");
    scanf(" %c", &estado2);


    //Código
    printf("Digite a letra inicial do seu Estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", &codigo2);

    //Nome da Cidade
    printf("Digite sua Cidade: \n");
    scanf(" %s", &cidade2);

    //População
    printf("Digite a População: \n");
    scanf(" %d", &populacao2);

    //Área
    printf("Digite a Área (em Km²): \n");
    scanf(" %f", &area2);

    //PIB
    printf("Digite o PIB (em Bilhões): \n");
    scanf(" %f", &pib2);

    //Pontos Turísticos
    printf("Digite os pontos turisticos: \n");
    scanf(" %d", &turistico2);

    //IMPRIMIR CARTA 2.
    printf("\nEstado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    super_poder1 = populacao2 + area2 + pib1 + turistico2 + (1 / densidade_populacional2) + pib_per_capita2;
    printf("Super poder é: %.2f\n", super_poder2);


    printf("\nComparação de cartas: \n");

    //População
        if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");

        } else {
        printf("População: Carta 2 venceu\n");
    }

    //Área
        if (area1 > area2) {
        printf("Área: Carta 1 venceu\n");

        } else {
        printf("Área: Carta 2 venceu\n");
    }

    //PIB
        if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");

    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    //Pontos Turísticos
        if (turistico1 > turistico2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");

    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }

    //Densidade Populacional
        if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");

    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    //PIB per Capita
        if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu\n");

    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    //Super Poder
        if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu\n");

    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }

    

    return 0;
    

}
