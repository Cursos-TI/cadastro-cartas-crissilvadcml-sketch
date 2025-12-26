#include <stdio.h>
         


int main() {
  // Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populaçao1;
    float area1;
    float pib1;
    int pontosturisticos1;

  // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;

  // Área para entrada de dados
  printf("=== Cadastro da carta 1 ===\n");

  printf("Estado: ");
  scanf(" %c", &estado1);


  printf("Codigo: \n");
  scanf("%s", codigo1);


  printf("Cidade: \n");
  scanf("%[^\n]", cidade1);


  printf("Populaçao: \n");
  scanf("%d", &populaçao1);


  printf("Area: \n");
  scanf("%f", &area1);


  printf("Pib: \n");
  scanf("%f", &pib1);


  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos1);




  printf("=== Cadastro da Carta 2 ===\n");
  
  printf("Estado: \n");
  scanf(" %c", &estado2);


  printf("Codigo: \n");
  scanf("%s", codigo2);


  printf("Cidade: \n");
  scanf("%[^\n]", cidade2);

  printf("Populaçao: \n");
  scanf("%d", &populaçao2);


  printf("Area: \n");
  scanf("%f", &area2);


  printf("Pib: \n");
  scanf("%f", &pib2);


  printf("Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos2);
  // Área para exibição dos dados da cidade



  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populaçao: %d\n", populaçao1);
  printf("Area: %.2f\n", area1);
  printf("Pib: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);


   
  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populaçao: %d\n", populaçao2);
  printf("Area: %.2f\n", area2);
  printf("Pib: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);





return 0;
} 
