#include <stdio.h>

int main(){


 int carta= 1;
    char nome_da_cidade[30]= "Fortaleza";
    char estado [10]= "CE";
    char codigo[25]="A01";
    int populacao=9873;
    float area=561.9;
    float PIB=3.2;
    int numero_de_pontos_turisticos=5;


    int carta2= 2;
    char nome_da_cidade2[30]= "maceio";
    char estado2[20]="AL";
    char codigo2[10]="B02";
    int populacao2=86442;
    float area2=123.3;
    float PIB2=246.9;
    int numero_de_pontos_turisticos2=10;


      // Área para entrada de dados
     
      printf("digite o numero da carta:");
      scanf("%d", &carta);


      printf("digite o nome da cidade:");
      scanf("%s", &nome_da_cidade);


      printf("digite o estado:");
      scanf("%s", &estado);


      printf("digite o codigo:");
      scanf("%s", &codigo);


      printf("digite a populaçao:");
      scanf(" %d", &populacao);


      printf(" digite a area:");
      scanf("%f", &area );


      printf("digite o PIB:");
      scanf("%f", &PIB);


      printf("digite o numero de pontos turisticos:");
      scanf("%d", &numero_de_pontos_turisticos);

      printf("digite o numero da carta:");
      scanf("%d",&carta2);


      printf("digite o nome da cidade:");
      scanf("%s", nome_da_cidade2);


      printf("digite o estado:");
      scanf("%s", estado2);


      printf("digite o codigo:");
      scanf("%s", codigo2);


      printf("digite a populaçao:");
      scanf("%d", &populacao2);


      printf(" digite a area:");
      scanf("%f", &area2);


      printf("digite o PIB:");
      scanf("%f", &PIB2);


      printf("digite o numero de pontos turisticos:");
      scanf("%d", &numero_de_pontos_turisticos2);


        // Área para exibição dos dados da cidade
     
      printf("carta: %d\n nome_da_cidade: %s\n estado: %s\n codigo: %s\n populacao: %d\n area: %.2f\n PIB: %.2f\n numero_de_pontos_turisticos: %d\n", carta, nome_da_cidade, estado, codigo, populacao, area, PIB, numero_de_pontos_turisticos);      
     
      printf("carta2: %d\n nome_da_cidade2: %s\n estado2: %s\n codigo2: %s\n populacao2: %d\n area2: %.2f\n PIB2: %.2f\n numero_de_pontos_turisticos2: %d\n", carta, nome_da_cidade, estado, codigo, populacao, area, PIB, numero_de_pontos_turisticos);




  return 0;











    
}
