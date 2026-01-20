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

  int opcao1, opcao2;
  float valor1_carta1, valor1_carta2;
  float valor2_carta1, valor2_carta2;
  float soma1, soma2;

  printf("\nEscolha o primeiro atributo de comparação:\n");
  printf("1 - População\n");
  printf("2 - Area\n");
  printf("3 - Pib\n");
  printf("4 - Pontosturisticos\n");
  printf("5 - Densidadepopulacional\n");
  printf("opção: ");
  scanf("%d", &opcao1);

  switch (opcao1) {
    case 1: 
    valor1_carta1 = populaçao1;
    valor1_carta2 = populaçao2;
    break;

    case 2: 
    valor1_carta1 = area1;
    valor1_carta2 = area2;
    break;

    case 3:
    valor1_carta1 = pib1;
    valor1_carta2 = pib2;
    break;

    case 4:
    valor1_carta1 = pontosturisticos1;
    valor1_carta2 = pontosturisticos2;
    break;

    case 5:
    valor1_carta1 = 1 / densindade1;
    valor1_carta2 = 1 / densidade2;
    break;

    default:
    printf("Opção inválida\n");
    return 0;
    }

    printf("\nEscolha o segundo atributo de comparação:\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - Pib\n");
    if (opcao1 != 4) printf("4 - Pontosturisticos\n");
    if (opcao1 != 5) printf("5 - Densidadepopulacional\n");
    printf("opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Opção inválida: atributo já escolhido\n");
        return 0;
    }


    switch (opcao2) {
    case 1: 
    valor2_carta1 = populaçao1;
    valor2_carta2 = populaçao2;
    break;

    case 2: 
    valor2_carta1 = area1;
    valor2_carta2 = area2;
    break;

    case 3:
    valor2_carta1 = pib1;
    valor2_carta2 = pib2;
    break;

    case 4:
    valor2_carta1 = pontosturisticos1;
    valor2_carta2 = pontosturisticos2;
    break;

    case 5:
    valor2_carta1 = 1 / densindade1;
    valor2_carta2 = 1 / densidade2;
    break;

    default:
    printf("Opção inválida\n");
    return 0;
    }
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos escolhidos:\n");
    printf("Carta 1 (%s): %.2f\n", cidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", cidade2, soma2);

    printf("\nResultado Final: ");
    soma1==soma2
    ? printf("Empate!\n")
    : printf("Vencedora: %s\n", soma1 > soma2 ? cidade1 : cidade2);

    return 0;
}
