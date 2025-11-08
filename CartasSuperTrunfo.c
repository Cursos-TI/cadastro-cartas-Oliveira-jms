/*
 * Arquivo: super_trunfo.c
 * Autor: [João Marcelo de Oliveira dos Santos]
 * Descricao: Desafio Nível Novato - Cadastro e Exibicao
 */

#include <stdio.h>

int main() {
    
    // --- Declaracao das Variaveis da Carta 1 ---
    char  estado1;
    char  codigo1[5];
    char  nomeCidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;

    // --- Declaracao das Variaveis da Carta 2 ---
    char  estado2;
    char  codigo2[5];
    char  nomeCidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;


    // --- Bloco 1: Entrada de Dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- Bloco 2: Entrada de Dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n"); 

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Bloco 3: Exibicao dos Dados Cadastrados ---
    
    printf("\n--- Carta 1 Cadastrada ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da Carta 2
    printf("\n--- Carta 2 Cadastrada ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}