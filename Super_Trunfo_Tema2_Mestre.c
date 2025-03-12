#include <stdio.h>

int main(){

    //Declarando as variáveis
    char estado1, estado2;
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, PIB_per_capita1, densidade_populacional2, PIB_per_capita2;
    int opcao;
    

    //Solicitando dados para cadastrar as cartas

    printf("\nBem-vindo ao desafio Super Trundo\n");

    //Solicitando dados para cadastrar a primeira carta

    printf("\nCadastre a CARTA 01\n");
    
    printf("\nDigite o estado (Letra de A a H):\n");
    scanf("%c", &estado1);

    printf("\nDigite o codigo da carta (Ex: A01, A05, B01):\n");
    scanf("%s",codigo_carta1);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", nome_cidade1);

    printf("\nDigite a populacao:\n");
    scanf("%d", &populacao1);

    printf("\nDigite a area da cidade:\n");
    scanf("%f", &area1);

    printf("\nDigite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

 //Solicitando dados para cadastrar a segunda carta

    printf("\nCadastre a CARTA 02\n");
    
    printf("\nDigite o estado (Letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("\nDigite o codigo da carta (Ex: A01, A05, B01):\n");
    scanf("%s",codigo_carta2);

    printf("\nDigite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("\nDigite a populacao:\n");
    scanf("%d", &populacao2);

    printf("\nDigite a area da cidade:\n");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das métricas solicitadas

    densidade_populacional1 = (float) populacao1 / area1; //População por km2 CARTA 1
    PIB_per_capita1 = (float)(pib1 / populacao1); // PIB médio por pessoa CARTA 1

    densidade_populacional2 = (float) populacao2 / area2; //População por km2 CARTA 2
    PIB_per_capita2 = (float)(pib2 / populacao2); // PIB médio por pessoa CARTA 2

    
    // Exibindo os dados cadastrados das Cartas 01 e 02

    printf("\n ----- Carta 01 -----\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    printf("\n ----- Carta 02 -----\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);

    // Exibindo a comparação das carta

    printf("\n------- Comparacao de Cartas: -------\n");

      // Menu de opções para o usuário escolher o atributo de comparação


    printf("\nEscolha o atributo de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("Digite o número correspondente à opção: ");
    scanf(" %d", &opcao);

    printf("Opcao escolhida: %d\n", opcao);

    switch (opcao) {
        case 1: // Comparar População
            printf("\nAtributo escolhido: POPULAÇÃO\n");
            printf("Carta 1 - %s: %d habitantes\n", nome_cidade1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao1 < populacao2) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2: // Comparar Área
            printf("\nAtributo escolhido: ÁREA\n");
            printf("Carta 1 - %s: %.2f km2\n", nome_cidade1, area1);
            printf("Carta 2 - %s: %.2f km2\n", nome_cidade2, area2);
            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area1 < area2) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3: // Comparar Densidade Populacional
            printf("\nAtributo escolhido: DENSIDADE POPULACIONAL\n");
            printf("Carta 1 - %s: %.2f hab/km2\n", nome_cidade1, densidade_populacional1);
            printf("Carta 2 - %s: %.2f hab/km2\n", nome_cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {  // Regra inversa
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4: // Comparar PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", nome_cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", nome_cidade2, pib2);
            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib1 < pib2) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5: // Comparar PIB per Capita
            printf("\nAtributo escolhido: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f reais\n", nome_cidade1, PIB_per_capita1);
            printf("Carta 2 - %s: %.2f reais\n", nome_cidade2, PIB_per_capita2);
            if (PIB_per_capita1 > PIB_per_capita2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (PIB_per_capita1 < PIB_per_capita2) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }


return 0;

}
