#include <stdio.h>
         

int main() {
  // Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densindade1;
    float pib_per_capita1;
    float super_poder1;

  // Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

  // Área para entrada de dados
  printf("=== Cadastro da carta 1 ===\n");

  printf("Estado: ");
  scanf("%s", estado1);


  printf("Codigo: \n");
  scanf("%s", codigo1);


  printf("Cidade: \n");
  scanf("%s", cidade1);


  printf("Populaçao: \n");
  scanf("%lu", &populaçao1);


  printf("Area: \n");
  scanf("%f", &area1);


  printf("Pib: \n");
  scanf("%f", &pib1);


  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos1);

  // *** Cálculo da carta 1 *** //
  densindade1 = (float) populaçao1 / area1;
  pib_per_capita1 = pib1 / populaçao1;

  super_poder1 = 
      (float) populaçao1 + 
      area1 + 
      pib1 + 
      pontosturisticos1 + 
      pib_per_capita1 + 
      (1 / densindade1);



  printf("=== Cadastro da Carta 2 ===\n");
  
  printf("Estado: \n");
  scanf("%s", estado2);


  printf("Codigo: \n");
  scanf("%s", codigo2);


  printf("Cidade: \n");
  scanf("%s", cidade2);

  printf("Populaçao: \n");
  scanf("%lu", &populaçao2);


  printf("Area: \n");
  scanf("%f", &area2);


  printf("Pib: \n");
  scanf("%f", &pib2);


  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos2);

   // *** Cálculo da carta 1 *** //
  densidade2 = (float) populaçao2 / area2;
  pib_per_capita2 = pib2 / populaçao2;

 super_poder2 = 
      (float) populaçao2 + 
      area2 + 
      pib2 + 
      pontosturisticos2 + 
      pib_per_capita2 + 
      (1 / densidade2);
  // Área para exibição dos dados da cidade



  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populaçao: %lu\n", populaçao1);
  printf("Area: %.2f\n", area1);
  printf("Pib: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densindade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populaçao: %lu\n", populaçao2);
  printf("Area: %.2f\n", area2);
  printf("Pib: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  // Comparações de cartas
  printf("\n=== Comparação de Cartas ===\n");

  // Para a maioria dos atributos, maior valor vence
  printf("Populacao: Carta 1 venceu (%lu)\n", populaçao1);
  printf("Area: Carta 1 venceu (%.2f)\n", area1);
  printf("Pib: Carta 1 venceu (%.2f)\n", pib1);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1);
  printf("PIB per Capita: Carta 1 venceu (%.2f)\n", pib_per_capita1);
  // Para densidade populacional, menor valor vence
  printf("Densidade Populacional: Carta 1 venceu (%.2f)\n", densindade1);


  // *** Comparação das Cartas 1 e 2 ***

  printf("\n=== Comparacao de Cartas ===\n\n");

// População
if (populaçao1 > populaçao2)
    printf("Populacao: Carta 1 venceu (%lu)\n", populaçao1);
else
    printf("Populacao: Carta 2 venceu (%lu)\n", populaçao2);

// Área
if (area1 > area2)
    printf("Area: Carta 1 venceu (%.2f)\n", area1);
else
    printf("Area: Carta 2 venceu (%.2f)\n", area2);

// PIB
if (pib1 > pib2)
    printf("PIB: Carta 1 venceu (%.2f)\n", pib1);
else
    printf("PIB: Carta 2 venceu (%.2f)\n", pib2);

// Pontos Turísticos
if (pontosturisticos1 > pontosturisticos2)
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1);
else
    printf("Pontos Turisticos: Carta 2 venceu (%d)\n", pontosturisticos2);

// PIB per capita
if (pib_per_capita1 > pib_per_capita2)
    printf("PIB per Capita: Carta 1 venceu (%.2f)\n", pib_per_capita1);
else
    printf("PIB per Capita: Carta 2 venceu (%.2f)\n", pib_per_capita2);

// Densidade (MENOR vence)
if (densindade1 < densidade2)
    printf("Densidade Populacional: Carta 1 venceu (%.2f)\n", densindade1);
else
    printf("Densidade Populacional: Carta 2 venceu (%.2f)\n", densidade2);

// Super Poder
if (super_poder1 > super_poder2)
    printf("Super Poder: Carta 1 venceu (%.2f)\n", super_poder1);
else
    printf("Super Poder: Carta 2 venceu (%.2f)\n", super_poder2);

    return 0;
} 
