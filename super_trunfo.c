#include <stdio.h>

int main(){
    char estado;
    char codigo [20];
    char cidade [20];
    int populacao;
    float area;
    float pib;
    int turistico;
    float densidade_populacional; // Calcular população dividido pela area
    float pib_per_capita; // Calcular pib dividido pela populaçao
    
    

    //CARTA 1.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    //Estado
    printf("Carta 1.\nDigite a letra inicial do seu Estado: \n");
    scanf(" %c", &estado);

    //Código
    printf("Digite a letra inicial do seu Estado seguida de um número de 01 a 04 (ex: A01,B03): \n");
    scanf(" %s", &codigo);

    //Nome da Cidade
    printf("Digite sua Cidade: \n");
    scanf(" %s", &cidade);

    //População
    printf("Digite a População: \n");
    scanf(" %d", &populacao);

    //Área
    printf("Digite a Área (em Km²): \n");
    scanf(" %f", &area);

    //PIB
    printf("Digite o PIB (em Bilhões): \n");
    scanf(" %f", &pib);

    //Pontos Turísticos
    printf("Digite os pontos turisticos: \n");
    scanf(" %d", &turistico);

    //IMPRIMIR CARTA 1.
    printf("\nEstado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turistico);
    densidade_populacional = populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);


    //CARTA 2. @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    //Estado
    printf("\nCarta 2.\n");
    printf("Digite a letra inicial do seu Estado: \n");
    scanf(" %c", &estado);


    //Código
    printf("Digite a letra inicial do seu Estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", &codigo);

    //Nome da Cidade
    printf("Digite sua Cidade: \n");
    scanf(" %s", &cidade);

    //População
    printf("Digite a População: \n");
    scanf(" %d", &populacao);

    //Área
    printf("Digite a Área (em Km²): \n");
    scanf(" %f", &area);

    //PIB
    printf("Digite o PIB (em Bilhões): \n");
    scanf(" %f", &pib);

    //Pontos Turísticos
    printf("Digite os pontos turisticos: \n");
    scanf(" %d", &turistico);

    //IMPRIMIR CARTA 2.
    printf("\nEstado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turistico);
    densidade_populacional = populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    

    return 0;
    

}