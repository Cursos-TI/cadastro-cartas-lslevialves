#include <stdio.h> 

int main() { 

    char estado1[2];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    int pib1;
    int pontos1;
    char estado2[2];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    int pib2;
    int pontos2;

    
  printf("Vamos inserir os dados da Carta1 \n");
  printf("Defina uma letra de 'A' a 'H' : ");
  scanf("%c", &estado1);
  printf("Insira um código de 2 dígitos junto com o código da carta com letra diferente da carta anterior, exemplo: A01: ");
  scanf("%s", &codigo1);
  printf("Insira o nome da cidade: ");
  scanf("%s", &cidade1);
  printf("Qual o  total aproximado desta apopulação? ");
  scanf("%i", &populacao1);
  printf("Qual a área total desta cidade");
  scanf("%d", &pib1);
  printf("Insira o valor de pontos desta carta: ");
  scanf("%i", &pontos1);


    
  printf("Vamos inserir os dados da Carta2 \n");
  printf("Defina uma letra de 'A' a 'H' : ");
  scanf("%s", &estado2);
  printf("Insira um código de 2 dígitos junto com o código da carta, exemplo: A01: ");
  scanf("%s", &codigo2);
  printf("Insira o nome da cidade: ");
  scanf("%s", &cidade2);
  printf("Qual o  total aproximado desta apopulação? ");
  scanf("%i", &populacao2);
  printf("Qual a área total desta cidade");
  scanf("%d", &pib2);
  printf("Insira o valor de pontos desta carta: ");
  scanf("%i", &pontos2);

    
  printf("Os dados da carta 1 são: ");
  printf("Estado: %c\n", &estado1);
  printf("Código: %c\n", codigo1);
  printf("cidade: %c\n", cidade1);
  printf("População: %i\n", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB; %i\n", pib1);
  printf("Ponto: %i\n", pontos1);

    
  printf("Os dados da carta 2 são: ");
  printf("Estado: %c\n", estado2);
  printf("Código: %c\n", codigo2);
  printf("cidade: %c\n", cidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB; %i\n", pib2);
  printf("Ponto: %i\n", pontos2);

  return 0;

}
