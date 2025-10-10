#include <stdio.h>

int main(){

// variaveis da primeira cidade

int populaçao=4567;
int numero_de_pontos_turiaticos= 5;
char estado[5]= "sp";
char codigo[4]="a01";
char nome_da_cidade[8]="santos";
float area = 234.4;
float PIB= 3.2;
float densidade_populacional= populaçao/area; //o resultado sera em float
float PIB_per_capita= populaçao/PIB; //o resultado sera em float

//variaveis da segunda cidade

int populaçao2=6551;
int numero_de_pontos_turiaticos2= 3;        
char estado2[6]=  "rj";
char codigo2[4]="b02";
char nome_da_cidade2[8]="niteroi";
float area2 = 678.1;
float PIB2= 2.3;
float densidade_populacional2= populaçao2/area2;//o resultado sera em float
float PIB_per_capita2= populaçao2/PIB; //o resultado sera em float

// imprimindo os dados da primeira cidade
printf("cidade 1\n");

printf(" digite o estado:");
scanf("%s", estado);

printf(" digite o código:");    
scanf("%s", codigo);

printf(" digite o nome da cidade:");
scanf("%s", nome_da_cidade);

printf(" digite a população:");
scanf("%d", &populaçao);

printf("digie a area:");
scanf("%f", &area);

printf("digite o PIB:");
scanf("%f", &PIB);

printf(" digite o número de pontos turísticos:");
scanf("%d", &numero_de_pontos_turiaticos);


printf("\n");

// imprimindo os dados da segunda cidade 
printf("cidade 2\n");

printf(" digite o estado:");
scanf("%s", estado2);

printf(" digite o código:");
scanf("%s", codigo2);

printf(" digite o nome da cidade:");
scanf("%s", nome_da_cidade2);

printf(" digite a população:");
scanf("%d", &populaçao2);

printf("digie a area:");
scanf("%f", &area2);

printf("digite o PIB:");
scanf("%f", &PIB2);

printf(" digite o número de pontos turísticos:");
scanf("%d", &numero_de_pontos_turiaticos2);


// exibindos os dados das cidades 
printf("\n");
printf("estado: %s\n codigo: %s\n  nome_da_cidade: %s\n população: %d\n area: %.2f\n PIB: %.2f\n número de pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capita: %.2f\n", estado, codigo, nome_da_cidade, populaçao, area, PIB, numero_de_pontos_turiaticos, densidade_populacional, PIB_per_capita);

printf("\n");

printf("estado: %s\n codigo: %s\n  nome_da_cidade: %s\n população: %d \n area: %.2f\n PIB: %.2f\n número de pontos turísticos: %d\n Densidade populacional: %.2f\n PIB per capita: %.2f\n", estado2, codigo2, nome_da_cidade2, populaçao2, area2, PIB2, numero_de_pontos_turiaticos2, densidade_populacional2, PIB_per_capita2);
 
printf("\n");
//comparaçao dos atributos

if (estado > estado2){
printf("carta1 venceu!\n");
}else{ 
    printf("carta2 venceu!\n");
}

if (populaçao > populaçao2){
    printf("carta1 venceu!\n");
}else{
    printf("carta2 venceu!\n");
}

if (area > area2){
    printf("carta1 venceu!\n");
}else{ 
    printf("carta2 venceu!\n");
}

if (PIB > PIB2){
    printf("carta1 venceu!\n");
}else{
    printf("carta2 venceu!\n");
}
if (numero_de_pontos_turiaticos > numero_de_pontos_turiaticos2){
    printf("carta1 venceu!\n");
}else{
    printf("carta2 venceu!\n");
}
if (PIB_per_capita > PIB_per_capita2){
    printf("carta1 venceu!\n");
}else{
    printf("carta2 venceu!\n");
}

if (densidade_populacional < densidade_populacional2){
    printf("carta1 venceu!\n");
}else {
    printf("carta2 venceu!\n");
}




return 0;

}











    

