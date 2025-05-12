#include <stdio.h>

int main(){


    //carta 1
    char estado1[100];
    char cod_da_carta1[100];
    char nome_da_cidade1[100];
    int populacao1, pontos_turisticos1;
    float pib1, area_em_km1;

    //carta 2
    char estado2[100];
    char cod_da_carta2[100];
    char nome_da_cidade2[100];
    int populacao2, pontos_turisticos2;
    float area_em_km2, pib2;

    //inserir informações da primeira carta

    printf ("Qual o nome do primeiro estado? \n");
    scanf ("%s", estado1);

    printf ("Qual o codigo da primeira carta? \n");
    scanf ("%s", cod_da_carta1);

    printf ("Qual o nome da cidade? \n");
    scanf ("%s", nome_da_cidade1);

    printf ("Qual o número populacional do %s? \n", nome_da_cidade1);
    scanf ("%d", &populacao1);

    printf ("Qual o PIB de %s? \n", nome_da_cidade1);
    scanf ("%f", &pib1);

    printf ("Qual a área em quilômetro de %s? \n", nome_da_cidade1);
    scanf ("%f", &area_em_km1);

    printf ("Quantos Pontos Turísticos tem o %s? \n", nome_da_cidade1);
    scanf ("%d", &pontos_turisticos1);

    printf("\n");

    //inserir informações da segunda carta

    printf ("Qual o nome do segundo estado? \n");
    scanf ("%s", estado2);

    printf ("Qual o codigo da segunda carta? \n");
    scanf ("%s", cod_da_carta2);

    printf ("Qual o nome da cidade? \n");
    scanf ("%s", nome_da_cidade2);

    printf ("Qual o número populacional de %s? \n", nome_da_cidade2);
    scanf ("%d", &populacao2);

    printf ("Qual o PIB de %s? \n", nome_da_cidade2);
    scanf ("%f", &pib2);

    printf ("Qual a área em quilômetro de %s? \n", nome_da_cidade2);
    scanf ("%f", &area_em_km2);

    printf ("Quantos Pontos Turísticos tem o %s? \n", nome_da_cidade2);
    scanf ("%d", &pontos_turisticos2);

    printf("\n");

    printf ("Carta 1:\n" "Estado: %s\n" "Código: %s\n" "Nome da cidade: %s\n",estado1, cod_da_carta1, nome_da_cidade1);
    printf ("População: %d\n" "Área: %f\n" "PIB: %f\n" "Número de Pontos Turísticos: %d\n", populacao1, area_em_km1, pib1, pontos_turisticos1);


    printf ("Carta 2:\n" "Estado: %s\n" "Código: %s\n" "Nome da cidade: %s\n",estado2, cod_da_carta2, nome_da_cidade2);
    printf ("População: %d\n" "Área: %f\n" "PIB: %f\n" "Número de Pontos Turísticos: %d\n", populacao2, area_em_km2, pib2, pontos_turisticos2);

    return 0;

}
