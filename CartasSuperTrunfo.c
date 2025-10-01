#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas - Nível Mestre
// Objetivo: No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da Carta 1

  char estado1;
  char codigo1[4];
  char cidade1[40];
  unsigned long int populacao1;
  float area_km2_1;
  float pib1;
  int pontos_turisticos1;

  // Variáveis da Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[40];
  unsigned long int populacao2;
  float area_km2_2;
  float pib2;
  int pontos_turisticos2;
  
  // Variável de Comparação
  unsigned long int populacao;
  int area_km2;
  int pib;
  int pontos_turisticos;
  int densidade;
  int pib_per_capita;
  float super_poder;

  // Área para entrada de dados

  // Dados da Carta 1

  printf("Carta 1:\n");

  printf("Digite o Estado (uma letra de 'A' a 'H'): ");
  scanf(" %c", &estado1); // Lê uma letra (Estado)

  printf("Digite o código da carta (de 01 a 04): ");
  scanf("%3s", codigo1); // Lê até 3 caracteres

  getchar(); // Limpa o buffer antes do fgets

  printf("Digite o nome da cidade: ");
  fgets(cidade1, 40, stdin); // Lê nome com espaços
  cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' no final

  printf("Digite a população: ");
  scanf("%lu", &populacao1); // Lê número inteiro

  printf("Digite a área (em km²): ");
  scanf("%f", &area_km2_1); // Lê número decimal

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Dados da Carta 2

  printf("\nCarta 2:\n");

  printf("Digite o Estado (uma letra de 'A' a 'H'): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (de 01 a 04): ");
  scanf("%3s", codigo2);

  getchar();

  printf("Digite o nome da cidade: ");
  fgets(cidade2, 40, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("Digite a população: ");
  scanf("%lu", &populacao2);

  printf("Digite a área (em km²): ");
  scanf("%f", &area_km2_2);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Cálculo da Densidade Populacional e PIB per Capita

  float densidade1 = (float)populacao1 / area_km2_1;
  float pib_per_capita1 = (pib1 * (float)1000000000.0) / populacao1;

  float densidade2 = (float)populacao2 / area_km2_2;
  float pib_per_capita2 = (pib2 * (float)1000000000.0) / populacao2;

  // Cálculo do Super Poder
  
  float super_poder1 = (float)populacao1 + area_km2_1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + ((float)1.0 / densidade1);

  float super_poder2 = (float)populacao2 + area_km2_2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + ((float)1.0 / densidade2);

  // Comparação das Cartas

  populacao = populacao1 > populacao2;
  area_km2 = area_km2_1 > area_km2_2;
  pib = pib1 > pib2;
  pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
  densidade = densidade1 < densidade2; // Menor densidade
  pib_per_capita = pib_per_capita1 > pib_per_capita2;
  super_poder = super_poder1 > super_poder2;

  // Área para exibição dos dados da cidade

  // Dados da Carta 1

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area_km2_1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder: %f\n", super_poder1);

  // Dados da Carta 2

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area_km2_2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
  printf("Super Poder: %f\n", super_poder2);

  // Resultado da Comparação das Cartas

  printf("\nResultado da Comparação de Cartas:\n");
  printf("População: %lu\n", populacao);
  printf("Área: %d\n", area_km2);
  printf("PIB: %d\n", pib);
  printf("Pontos Turísticos: %d\n", pontos_turisticos);
  printf("Densidade Populacional: %d\n", densidade);
  printf("PIB per Capita: %d\n", pib_per_capita);
  printf("Super Poder: %d\n", (int)super_poder);

  return 0;
}
