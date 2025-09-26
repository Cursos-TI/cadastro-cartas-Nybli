#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da Carta 1

  char estado1;
  char codigo1[4];
  char cidade1[40];
  int populacao1;
  float area_km2_1;
  float pib1;
  int pontos_turisticos1;

  // Variáveis da Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[40];
  int populacao2;
  float area_km2_2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados

  // Dados da Carta 1

  printf("Carta 1:\n");

  printf("Digite o Estado (uma letra de 'A' a 'H'): ");
  scanf(" %c", &estado1); // Lê uma letra (Estado)

  printf("Digite o código da carta (de 01 a 04): ");
  scanf("%3s", codigo1); // Lê até 3 caracteres

  getchar(); // Limpa o buffer antes do fgets

  printf("Digite o nome da cidade: ");
  fgets(cidade1, 40, stdin);           // Lê nome com espaços
  cidade1[strcspn(cidade1, "\n")] = 0; // Remove o '\n' no final

  printf("Digite a população: ");
  scanf("%d", &populacao1); // Lê número inteiro

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
  scanf("%d", &populacao2);

  printf("Digite a área (em km²): ");
  scanf("%f", &area_km2_2);

  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

  // Dados da Carta 1

  printf("\n\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area_km2_1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

  // Dados da Carta 2

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area_km2_2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}
