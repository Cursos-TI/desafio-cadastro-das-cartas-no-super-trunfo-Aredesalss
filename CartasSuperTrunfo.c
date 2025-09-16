#include <stdio.h>
int main(){

char estado1[2], estado2[2];
char codigo1[5], codigo2[5];
char nome1[20], nome2[20];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float densidade1, densidade2;
float pibpc1, pibpc2;

/*
CADASTRANDO AS CARTAS DO SUPER TRUNFO

CARTA 1:
*/


printf("Siga as instrucoes abaixo para cadastrar as cartas 'N°1' E 'N°2':\n\n");

printf("Digite uma letra de 'A' a 'H' para a carta 1:");
scanf("%s", &estado1);

printf("Digite um codigo para a carta. Ex:(A01,B02...):");
scanf("%s", &codigo1);

printf("Digite o nome da cidade:");
getchar();
fgets(nome1, 20, stdin);

printf("Digite o numero da populacao:");
scanf("%d", &populacao1);

printf("Digite o numero da area da cidade:");
scanf("%f", &area1);

printf("Digite o PIB:");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos:");
scanf("%d", &pontos1);

printf("\nDados da carta '1' obtidos com sucesso!\n");

densidade1 = (float) (populacao1 / area1);
pibpc1 = (float) (pib1 / populacao1);

//CARTA 2

printf("\nAgora, digite uma letra de 'A' a 'H' para a carta 2:");
scanf("%s", &estado2);

printf("Digite um codigo para a carta. Ex:(A01,B02...):");
scanf("%s", &codigo2);

printf("Digite o nome da cidade:");
getchar();
fgets(nome2, 20, stdin);

printf("Digite o numero da populacao:");
scanf("%d", &populacao2);

printf("Digite o numero da area da cidade:");
scanf("%f", &area2);

printf("Digite o PIB:");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos:");
scanf("%d", &pontos2);

densidade2 = (float) (populacao2 / area2);
pibpc2 = (float) (pib2 / populacao2);

//exibição dos dados das cartas n°1 e n°2

//carta n°1

printf("\n\nCarta 1:\n");
printf("Estado: %s\n", &estado1);
printf("Codigo da carta: %s\n",&codigo1);
printf("Nome da cidade: %s",&nome1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f Km²\n", area1);
printf("PIB: %.02f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n\n", pontos1);
printf("Densidade Populacional:%f \n", densidade1);
printf("PIB Per Capita: %f \n",pibpc1);


//carta n°2

printf("\n\nCarta 2:\n");
printf("Estado: %s\n", &estado2);
printf("Codigo da carta: %s\n",&codigo2);
printf("Nome da cidade: %s",&nome2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f Km²\n", area2);
printf("PIB: %.02f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n\n", pontos2);
printf("Densidade Populacional:%f \n", densidade2);
printf("PIB Per Capita: %f \n",pibpc2);



return 0;

}