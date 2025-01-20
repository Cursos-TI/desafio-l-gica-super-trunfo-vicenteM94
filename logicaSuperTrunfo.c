#include <stdio.h>

int main() {

    // Declaração de variáveis
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_Populacional1, densidade_Populacional2;
    float pib_Per_Capita1, pib_Per_Capita2;
     

    // Entrada de dados

    printf("Digite os dados da Carta 1:\n");
    printf("Digite o estado da Carta 1 (ex: SP): \n");
    scanf("%2s", estado1);
    printf("Digite o código da Carta 1 (ex: A01): \n");
    scanf("%3s", codigo1);
    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da Carta 1: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Carta registrada com sucesso!\n");

    printf("Digite os dados da Carta 2:\n");
    printf("Digite o estado da Carta 2 (ex: SP): \n");
    scanf("%2s", estado2);
    printf("Digite o código da Carta 2 (ex: A01): \n");
    scanf("%3s", codigo2);
    printf("Digite a população da Carta 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turísticos da Carta 2: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Carta registrada com sucesso!\n");

    // calculo da densidade populacional
    densidade_Populacional1 = populacao1 / area1;

    // calculo do PIB per capita
    pib_Per_Capita1 = pib1 / (float)populacao1;

    // calculo da densidade populacional2
    densidade_Populacional2 = populacao2 / area2;

    // calculo do PIB per capita2
    pib_Per_Capita2 = pib2 / (float)populacao2;

    // Saída de dados

    printf("Dados da Carta 1:\n");
    printf("Estado: %s - Código: %s - População: %lu - Área: %f - PIB: %f Pontos Turisticos: %d - Densidade Populacional: %f - PIB per Capita: %f\n", estado1, codigo1, populacao1, area1, pib1, pontos_turisticos1, densidade_Populacional1, pib_Per_Capita1);

    printf("Dados da Carta 2:\n");
    printf("Estado: %s - Código: %s - População: %lu - Área: %f - PIB: %f Pontos Turisticos: %d - Densidade Populacional: %f - PIB per Capita: %f\n", estado2, codigo2, populacao2, area2, pib2, pontos_turisticos2, densidade_Populacional2, pib_Per_Capita2);

    // Comparação de cartas

    float atributos1[] = {populacao1, area1, pib1, pontos_turisticos1, pib_Per_Capita1};
    float atributos2[] = {populacao2, area2, pib2, pontos_turisticos2, pib_Per_Capita2};

    int pontos1 = 0;
    int pontos2 = 0;

    for (int i = 0; i < 5; i++) {
        if (atributos1[i] > atributos2[i]) {
            pontos1++;
            
        } else if (atributos1[i] < atributos2[i]) {
            pontos2++;

        }
    }

    if (densidade_Populacional1 < densidade_Populacional2) {
        pontos1++;
    } else if (densidade_Populacional1 > densidade_Populacional2) {
        pontos2++;
    }

    if (pontos1 > pontos2){
        printf("Carta 1 venceu\n");
    } else if (pontos2 > pontos1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("As cartas estão empatadas\n");
    }



}