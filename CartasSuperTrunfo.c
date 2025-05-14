#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("DESAFIO SUPER TRUNFO DE PAÍSES\n");

    char estado1;
    //definição de estado 

    char codcarta1[4];
    //definição código da carta

    char cidade1[50];
    //definição nome da cidade

    int populacao1;
    //definição numero população 

    int pontoturistico1;
    //definição a quantidade de pontos turisticos 

    float area1;
    //definição em KM²
 
    float pib1;
    //definição em Produto Interno Bruto

    float densidade1;
    float pib_percapita1;
    //densidade e pib per capita

    float superpoder1;
    //superpoder
   


    //país 2


    char estado2;
    //definição de estado 

    char codcarta2[4];
    //definição código da carta

    char cidade2[50];
    //definição nome da cidade

    int populacao2;
    //definição numero população 

    int pontoturistico2;
    //definição a quantidade de pontos turisticos 

    float area2;
    //definição em KM²
 
    float pib2;
    //definição em Produto Interno Bruto

    float densidade2;
    float pib_percapita2;
    //densidade e pib per capita

    float superpoder2;
    //superpoder


    //Inicialização - captura das informações com o usuário

    printf("---------Cadrastro Carta 1---------\n");

    printf("Escolha uma letra de A á H representando o estado: ");
    scanf(" %c",&estado1);

    printf("Código da carta (código do estado seguido de um núero de 01 a 04): ");
    scanf(" %3c", codcarta1);
    
    printf("Nome da cidade: ");
    scanf("%49s", cidade1);
    
    printf("População/Habitantes: ");
    scanf(" %d",&populacao1);

    printf("Área da cidade (em km2): ");
    scanf(" %f",&area1);

    printf("PIB da cidade: ");
    scanf(" %f",&pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d",&pontoturistico1);

    printf("---------Cadrastro Carta 2---------\n");

    printf("Escolha uma letra de A á H representando o estado: ");
    scanf(" %c",&estado2);

    printf("Código da carta (código do estado seguido de um núero de 01 a 04): ");
    scanf(" %3c", codcarta2);
    
    printf("Nome da cidade: ");
    scanf("%49s", cidade2);
    
    printf("População/Habitantes: ");
    scanf(" %d",&populacao2);

    printf("Área da cidade (em km2): ");
    scanf(" %f",&area2);

    printf("PIB da cidade: ");
    scanf(" %f",&pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf(" %d",&pontoturistico2);

    // Cálculos de densidade e pib percapita
    densidade1 = populacao1 / area1;
    pib_percapita1 = (pib1 * 1e9f) / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontoturistico1 + pib_percapita1 + (1.0f / densidade1);


    densidade2 = populacao2 / area2;
    pib_percapita2 = (pib2 * 1e9f) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontoturistico2 + pib_percapita2 + (1.0f / densidade2);

    // Mostrando as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superpoder2);


    // Comparações - na densidade, vence quem tem menor densidade
    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu\n");
    else if (populacao2 > populacao1)
        printf("População: Carta 2 venceu\n");
    else
        printf("População: Empate\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu\n");
    else if (area2 > area1)
        printf("Área: Carta 2 venceu\n");
    else
        printf("Área: Empate\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu\n");
    else
        printf("PIB: Empate\n");

    if (pontoturistico1 > pontoturistico2)
        printf("Pontos Turísticos: Carta 1 venceu\n");
    else if (pontoturistico2 > pontoturistico1)
        printf("Pontos Turísticos: Carta 2 venceu\n");
    else
        printf("Pontos Turísticos: Empate\n");

    
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu\n");
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 venceu\n");
    else
        printf("Densidade Populacional: Empate\n");

    if (pib_percapita1 > pib_percapita2)
        printf("PIB per Capita: Carta 1 venceu\n");
    else if (pib_percapita2 > pib_percapita1)
        printf("PIB per Capita: Carta 2 venceu\n");
    else
        printf("PIB per Capita: Empate\n");

    if (superpoder1 > superpoder2)
        printf("Super Poder: Carta 1 venceu\n");
    else if (superpoder2 > superpoder1)
        printf("Super Poder: Carta 2 venceu\n");
    else
        printf("Super Poder: Empate\n");


    //printf("");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}