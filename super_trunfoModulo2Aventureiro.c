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
    float super_poder1, super_poder2; //Calculo de população + area + pib + pontos turisticos + densidade populacional + pib per capita
    
    int atributo;

    printf("Super Trunfo - Países\n");
    printf("\nCadastrar Cidades:\n");
    

    //CARTA 1.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    
    //Estado
    printf("Carta 1.\nDigite a sigla do seu Estado: \n");
    scanf(" %s", &estado1);

     
    //Código
    printf("Digite a letra inicial do seu Estado seguida de um número de 01 a 04 (ex: A01,B03): \n");
    scanf(" %s", &codigo1);

    //Cidade
    printf("Digite sua Cidade: \n");
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

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + turistico1 + (1 / densidade_populacional1) + pib_per_capita1;
    

    //CARTA 2. @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    //Estado
    printf("\nCarta 2.\n");
    printf("Digite a sigla do seu Estado: \n");
    scanf(" %s", &estado2);


    //Código
    printf("Digite a letra inicial do seu Estado seguida de um numero de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", &codigo2);

    //Cidade
    printf("Digite sua Cidade: \n");
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

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + turistico2 + (1 / densidade_populacional2) + pib_per_capita2;



    //COMPARAÇÃO DE CARTAS
    printf("\nComparar cartas: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um atributo: ");
    scanf( "%d", &atributo);

    switch(atributo){
    case 1:     //POPULAÇÃO
        printf("\nCarta 1: %s vs Carta 2: %s\n", cidade1, cidade2);
        if (populacao1 > populacao2){
            printf("População: %s = %d vs %s = %d\n",cidade1, populacao1, cidade2, populacao2);
            printf("### %s Venceu! ###\n", cidade1);
        
        } else if(populacao1 == populacao2){
            printf("População: %s = %d vs %s = %d\n",cidade1, populacao1, cidade2, populacao2);
            printf("*** Empatou! ***\n");

        } else {
            printf("População: %s = %d vs %s = %d\n",cidade1, populacao1, cidade2, populacao2);
            printf("### %s Venceu! ###\n", cidade2);
        } break;

    case 2:     //ÁREA
        printf("\nCarta: 1 %s vs Carta 2: %s\n", cidade1, cidade2);
        if (area1 > area2){
            printf("Área: %s = %.2f km² vs %s = %.2f km²\n",cidade1, area1, cidade2, area2);
            printf("### %s Venceu! ###\n", cidade1);
        
        } else if(area1 == area2){
            printf("Área: %s = %.2f km² vs %s = %.2f km²\n",cidade1, area1, cidade2, area2);
            printf("*** Empatou! ***\n");

        } else {
            printf("Área: %s = %.2f km² vs %s = %.2f km²\n",cidade1, area1, cidade2, area2);
            printf("### %s Venceu! ###\n", cidade2);
        } break;

    case 3:     //PIB
      printf("\nCarta: 1 %s vs Carta 2: %s\n", cidade1, cidade2);
        if (pib1 > pib2){
            printf("PIB: %s = %.2f bilhões vs %s = %.2f bilhões \n",cidade1, pib1, cidade2, pib2);
            printf("### %s Venceu! ###\n", cidade1);
        
        } else if(pib1 == pib2){
            printf("PIB: %s = %.2f bilhões vs %s = %.2f bilhões\n",cidade1, pib1, cidade2, pib2);
            printf("*** Empatou! ***\n");

        } else {
            printf("PIB: %s = %.2f bilhões vs %s = %.2f bilhões\n",cidade1, pib1, cidade2, pib2);
            printf("### %s Venceu! ###\n", cidade2);
        } break;

    case 4:     //PONTOS TURÍSTICOS
     printf("\nCarta: 1 %s vs Carta: 2 %s\n", cidade1, cidade2);
        if (turistico1 > turistico2){
            printf("Pontos Turísticos: %s = %d vs %s = %d\n",cidade1, turistico1, cidade2, turistico2);
            printf("### %s Venceu! ###\n", cidade1);
        
        } else if(turistico1 == turistico2){
            printf("Pontos Turísticos: %s = %d vs %s = %d\n",cidade1, turistico1, cidade2, turistico2);
            printf("*** Empatou! ***\n");

        } else {
            printf("Pontos Turísticos: %s = %d vs %s = %d\n",cidade1, turistico1, cidade2, turistico2);
            printf("### %s Venceu! ###\n", cidade2);
        } break;


    case 5:     //DENSIDADE DEMOGRÁFICA
     printf("\nCarta 1: %s vs Carta 2: %s\n", cidade1, cidade2);
        if (densidade_populacional1 > densidade_populacional2){
            printf("Densidade Demográfica: %s = %.2f hab/km² vs %s = %.2f hab/km²\n",cidade1, densidade_populacional1, cidade2, densidade_populacional2);
            printf("### %s Venceu! ###\n", cidade1);
        
        } else if(densidade_populacional1 == densidade_populacional2){
            printf("Densidade Demográfica: %s = %.2f hab/km² vs %s = %.2f hab/km²\n",cidade1, densidade_populacional1, cidade2, densidade_populacional2);
            printf("*** Empatou! ***\n");

        } else {
            printf("Densidade Demográfica: %s = %.2f hab/km² vs %s = %.2f hab/km²\n",cidade1, densidade_populacional1, cidade2, densidade_populacional2);
            printf("### %s Venceu! ###\n", cidade2);
        } break;

     default:
     printf("\nOpção Inválida.\n");
    }



    return 0;
    

}
