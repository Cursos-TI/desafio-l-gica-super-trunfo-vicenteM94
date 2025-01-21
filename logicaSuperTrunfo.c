#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração de variáveis

    char estado1[3], estado_computador[3];
    char codigo1[4], codigo_computador[4];
    unsigned long int populacao1, populacao_computador;
    float area1, area_computador;
    float pib1, pib_computador;
    int pontos_turisticos1, pontos_turisticos_computador;
    float densidade_Populacional1, densidade_Populacional_computador;
    float pib_Per_Capita1, pib_Per_Capita_computador;

    int menu_inicial;

    float atributos1[] = {populacao1, area1, pib1, pontos_turisticos1, pib_Per_Capita1};
    float atributos2[] = {populacao_computador, area_computador, pib_computador, pontos_turisticos_computador, pib_Per_Capita_computador};

    int pontos1 = 0;
    int pontos2 = 0;

    // menu
    printf("Escolha uma opção:\n");
    printf("1 - Jogar\n");
    printf("2 - Sair\n");
    scanf("%d", &menu_inicial);
    
    switch (menu_inicial) {
        case 1:
            srand(time(0));
            unsigned long int populacao_computador = rand() % 1000000000;
            area_computador = rand() % 1000000000;
            pib_computador = rand() % 1000000000;
            pontos_turisticos_computador = rand() % 1000000000;
            densidade_Populacional_computador = populacao_computador / area_computador;
            pib_Per_Capita_computador = pib_computador / populacao_computador;
            // o jogo começa inserindo os dados da carta do jogador
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
            printf("Digite o numero de pontos turísticos da Carta 1: \n");
            scanf("%d", &pontos_turisticos1);
            printf("Carta registrada com sucesso!\n");

            // calculo da densidade populacional
            densidade_Populacional1 = populacao1 / area1;

            // calculo do PIB per capita
            pib_Per_Capita1 = pib1 / populacao1;

            // dados da carta do computador(só podera escolher o estado e o codigo, o resto será gerado aleatoriamente)
            printf("Digite o estado da Carta 2(Computador) (ex: SP): \n");
            scanf("%2s", estado_computador);
            printf("Digite o código da Carta 2(Computador) (ex: A01): \n");
            scanf("%3s", codigo_computador);
            printf("Carta registrada com sucesso!\n");

            // Saída de dados

            printf("Dados da Carta 1:\n");
            printf("Estado: %s - Código: %s - População: %lu habitantes - Área: %.2f km² - PIB: %.2f R$ Pontos Turisticos: %d - Densidade Populacional: %.2f hab./km² - PIB per Capita: %.5f R$\n", estado1, codigo1, populacao1, area1, pib1, pontos_turisticos1, densidade_Populacional1, pib_Per_Capita1);
            printf("Dados da Carta 2(Computador):\n");
            printf("Estado: %s - Código: %s - População: %lu habitantes  - Área: %.2f km² - PIB: %.2f R$ Pontos Turísticos: %d - Densidade Populacional: %.2f hab./km² - PIB per Capita: %.5f R$\n", estado_computador, codigo_computador, populacao_computador, area_computador, pib_computador, pontos_turisticos_computador, densidade_Populacional_computador, pib_Per_Capita_computador);
            
            // menu de jogo
            int opcao;
            printf("Escolha entre comparar atributos separados ou comparar todas as cartas:\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - Comparar todas as cartas\n");
            printf("8 - Sair\n");
            printf("Opção: ");
            scanf("%d", &opcao);
            
            switch (opcao) {
                case 1:
                printf("População: Carta 1 (%lu Habitantes) x Carta 2 (%lu Habitantes)\n", populacao1, populacao_computador);
                populacao1 > populacao_computador ? printf("Carta 1 venceu\n") : (populacao1 < populacao_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;
                case 2:
                printf("Área: Carta 1 (%.2f km²) x Carta 2 (%.2f km²)\n", area1, area_computador);
                area1 > area_computador ? printf("Carta 1 venceu\n") : (area1 < area_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;

                case 3:
                printf("PIB: Carta 1 (%.2f R$) x Carta 2 (%.2f R$)\n", pib1, pib_computador);
                pib1 > pib_computador ? printf("Carta 1 venceu\n") : (pib1 < pib_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;
                case 4:
                printf("Pontos Turísticos: Carta 1 (%d) x Carta 2 (%d)\n", pontos_turisticos1, pontos_turisticos_computador);
                pontos_turisticos1 > pontos_turisticos_computador ? printf("Carta 1 venceu\n") : (pontos_turisticos1 < pontos_turisticos_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;
                case 5:
                printf("Densidade Populacional: Carta 1 (%.2f hab./km²) x Carta 2 (%.2f hab./km²)\n", densidade_Populacional1, densidade_Populacional_computador);
                densidade_Populacional1 < densidade_Populacional_computador ? printf("Carta 1 venceu\n") : (densidade_Populacional1 > densidade_Populacional_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;
                case 6:
                printf("PIB per Capita: Carta 1 (%.5f R$) x Carta 2 (%.5f R$)\n", pib_Per_Capita1, pib_Per_Capita_computador);
                pib_Per_Capita1 > pib_Per_Capita_computador ? printf("Carta 1 venceu\n") : (pib_Per_Capita1 < pib_Per_Capita_computador ? printf("Carta 2 venceu\n") : printf("As cartas estão empatadas\n"));
                break;
                case 7:
                printf("Comparar todas as cartas\n");
                for (int i = 0; i < 5; i++) {
                    if (atributos1[i] > atributos2[i]) {
                        printf("Carta 1 venceu\n");
                        pontos1++;
                    } else if (atributos1[i] < atributos2[i]) {
                        printf("Carta 2 venceu\n");
                        pontos2++;
                    } else {
                        printf("As cartas estão empatadas\n");
                    }
                }
                if (densidade_Populacional1 < densidade_Populacional_computador) {
                    printf("Carta 1 venceu\n");
                    pontos1++;
                } else if (densidade_Populacional1 > densidade_Populacional_computador) {
                    printf("Carta 2 venceu\n");
                    pontos2++;
                } else {
                    printf("As cartas estão empatadas\n");
                }
                break;
                case 8:
                printf("Saindo do jogo...\n");
                break;
                default:
                printf("Opção inválida\n");
                break;

            }
            break;
        case 2:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida\n");
            break;


    }
    return 0;
}