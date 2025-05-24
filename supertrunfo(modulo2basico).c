#include <stdio.h>
#include <string.h>

int main(){
    char estado1[20], estado2[20]; //Sigla do Estado
    char codigo1 [20], codigo2 [20]; 
    char cidade1 [20], cidade2 [20]; //Nome da Cidade
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade_populacional1, densidade_populacional2; // Calcular população dividido pela area
    float pib_per_capita1, pib_per_capita2; // Calcular pib dividido pela populaçao
    float super_poder1, super_poder2;

    //CARTA 1.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    
    //Estado
    printf("Carta 1.\nDigite a sigla do seu Estado: \n");
    scanf(" %s", &estado1);

    //Código
    printf("Digite a letra inicial do seu Estado seguida de um número de 01 a 04 (ex: A01,B03): \n");
    scanf(" %s", &codigo1);

    //Cidade
    printf("Digite sua Cidade: ");
    getchar(); // Limpa buffer do teclado
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove a quebra de linha do nome

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
    printf("\nEstado: %s\n", estado1);
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
    printf("Digite a sigla do seu Estado: \n");
    scanf(" %s", &estado2);


    //Código
    printf("Digite a letra inicial do seu Estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", &codigo2);

    //Cidade
    printf("Digite sua Cidade: ");
    getchar(); // Limpa buffer do teclado
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove a quebra de linha do nome

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
    printf("\nEstado: %s\n", estado2);
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

    super_poder2 = populacao2 + area2 + pib2 + turistico2 + (1 / densidade_populacional2) + pib_per_capita2;
    printf("Super poder é: %.2f\n", super_poder2);


    //COMPARAÇÃO DE CARTAS

    //População
    printf("\nComparação de cartas (Atributo: População): \n");

        printf("\nCarta 1 - %s (%s): %d\n", cidade1, (estado1), populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, (estado2), populacao2);
        if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    
    }


    //Área
    printf("\nComparação de cartas (Atributo: Área): \n");

        printf("\nCarta 1 - %s (%s): %.2f km²\n", cidade1, (estado1), area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, (estado2), area2);
        if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);

        }

    //PIB
     printf("\nComparação de cartas (Atributo: PIB): \n");

        printf("\nCarta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, (estado1), pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, (estado2), pib2);
        if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);

        }

   
    //Pontos Turísticos
    printf("\nComparação de cartas (Atributo: Pontos Turísticos): \n");

        printf("\nCarta 1 - %s (%s): %d\n", cidade1, (estado1), turistico1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, (estado2), turistico2);
        if (turistico1 > turistico2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    
    }
    //Densidade Populacional
    printf("\nComparação de cartas (Atributo: Densidade Populacional): \n");

        printf("\nCarta 1 - %s (%s): %.2f hab/km²\n", cidade1, (estado1), densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, (estado2), densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    
    }


    //PIB per Capita
       printf("\nComparação de cartas (Atributo: PIB per Capita): \n");

        printf("\nCarta 1 - %s (%s): %.2f reais\n", cidade1, (estado1), pib_per_capita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, (estado2), pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    
    }


    //Super Poder
    printf("\nComparação de cartas (Atributo: Super Poder): \n");

        printf("\nCarta 1 - %s (%s): %.2f\n", cidade1, (estado1), super_poder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, (estado2), super_poder2);
        if (super_poder1 > super_poder2) {
        printf("Resultado: Carta 1 (%s) venceu\n", cidade1);

        } else {
        printf("Resultado: Carta 2 (%s) venceu\n", cidade2);
    
    }



    return 0;
    

}
