#include <stdio.h>

int main(){
    //Declarando as variáveis
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[20];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[20];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    //Solicitando dados para cadastrar as cartas

    printf("Bem-vindo ao desafio Super Trundo\n");

    //Solicitando dados para cadastrar a primeira carta

    printf("Cadastre a CARTA 01\n");
    
    printf("Digite o estado (Letra de A a H):\n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta (Ex: A01, A05, B01):\n");
    scanf("%s",codigo_carta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

 //Solicitando dados para cadastrar a segunda carta

    printf("Cadastre a CARTA 02\n");
    
    printf("Digite o estado (Letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: A01, A05, B01):\n");
    scanf("%s",codigo_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);


    // Exibindo os resultados das Cartas 01 e 02

    printf("\n ----- Carta 01 -----\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n ----- Carta 02 -----\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("------------------------\n");


    return 0;

    
}
