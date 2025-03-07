#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){
   
    // Declarando as variáveis da carta 1.

   char estado1[3], nomedaCidade1[20], CodigodaCarta1[4];
   float area1, PIB1;
   unsigned long int Populacao1;
   int NumerodePontosTuristicos1;

   // Declarando as variáveis da carta 2.

   char estado2[3], nomedaCidade2[20], CodigodaCarta2[4];
   float area2, PIB2;
   unsigned long int Populacao2;
   int NumerodePontosturisticos2;

   // Entrada de dados Carta 1.

    printf("Informe a sigla do estado: \n");
    scanf(" %2s", estado1);

    printf("Digite o código da carta: \n");
    scanf(" %3s", CodigodaCarta1);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB1);

    printf("Informe a quantidades de pontos turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos1);

   // Saídas Formatadas da Carta 1.

    printf("Carta 1 :\n");
    printf("Estado : %s\n", estado1);
    printf("Código : %s\n", CodigodaCarta1);
    printf("Nome da Cidade :%s\n", nomedaCidade1);
    printf("População : %lu\n",Populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB :%.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos :%d\n", NumerodePontosTuristicos1);

   // Entrada de dados Carta 2.

    printf("Informe a sigla do Estado: \n");
    scanf(" %2s", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %3s", CodigodaCarta2);

    printf("Informe o nome da cidade: \n");
    scanf(" %19[^\n]", nomedaCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao2);

    printf("Informe a area da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f",&PIB2);

    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &NumerodePontosturisticos2);

   // Saídas formatadas da Carta 2.

    printf("Carta 2:\n");
    printf("Estado : %2s\n", estado2);
    printf("Código : %s\n",CodigodaCarta2);
    printf("Nome da Cidade : %s\n", nomedaCidade2);
    printf("População :  %lu\n", Populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos :%d\n", NumerodePontosturisticos2);

    return 0;


}