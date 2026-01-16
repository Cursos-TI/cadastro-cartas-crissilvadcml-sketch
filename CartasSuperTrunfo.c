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

  printf("\n*** Comparação das Cartas ***\n");
  printf("Carta 1: %s\n", cidade1);
  printf("Carta 2: %s\n", cidade2);

  int opcao;
  printf("\nEscolha um atributo de comparação:\n");
  printf("1 - População\n");
  printf("2 - Area\n");
  printf("3 - Pib\n");
  printf("4 - Pontosturisticos\n");
  printf("5 - Densidadepopulacional\n");
  printf("opção: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1: 
    printf("\nAtributo escolhido: População\n");
    printf("%s: %lu\n", cidade1, populaçao1);
    printf("%s: %lu\n", cidade2, populaçao2);

    if (populaçao1 > populaçao2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (populaçao2 > populaçao1) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    break;

    case 2:
    printf("\nAtributo escolhido: Área\n");
    printf("%s: %.2f\n", cidade1, area1);
    printf("%s: %.2f\n", cidade2, area2);

    if (area1 > area2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (area2 > area1) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    break;

    case 3:
    printf("\nAtributo escolhido: Pib\n");
    printf("%s: %.2f\n", cidade1, pib1);
    printf("%s: %.2f\n", cidade2, pib2);

    if (pib1 > pib2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    break;

    case 4:
    printf("\nAtributo escolhido: Pontos Turisticos\n");
    printf("%s: %d\n", cidade1, pontosturisticos1);
    printf("%s: %d\n", cidade2, pontosturisticos2);

    if (pontosturisticos1 > pontosturisticos2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (pontosturisticos2 > pontosturisticos1) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    break;

    case 5:
    printf("\nAtributo escolhido: Densidade Populacional\n");
    printf("%s: %.2f hab/km²\n", cidade1, densindade1);
    printf("%s: %.2f hab/km²\n", cidade2, densidade2);

    // REGRA ESPECIAL: MENOR DENSIDADE VENCE
    if (densindade1 < densidade2) {
        printf("Vencedora: %s\n", cidade1);
    } else if (densidade2 < densindade1) {
        printf("Vencedora: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    break;

    default:
    printf("Opção inválida\n");
  }
    return 0;
}
