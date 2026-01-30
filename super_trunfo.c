#include <stdio.h>
int main(){

    char estado1[10], estado2[10];
    char cod_carta1[3], cod_carta2[3];
    char nome_cidade1[10], nome_cidade2[10];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;

    printf("Insira os dados da primeira carta!\n");
    printf("Estado:\n");
    scanf("%s", &estado1);
    printf("Codigo:\n");
    scanf("%s", &cod_carta1);
    printf("Nome da Cidade:\n");
    scanf("%s", &nome_cidade1);
    printf("Populacao:\n");
    scanf("%d", &populacao1);
    printf("Area:\n");
    scanf("%f", &area1);
    printf("Pib:\n");
    scanf("%f", &pib1);
    printf("Numero de Pontos:\n");
    scanf("%d", &pontos1);

    printf("Carta1:\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo:%s\n", cod_carta1);
    printf("Nome da Cidade:%s\n", nome_cidade1);
    printf("Populacao:%d\n", populacao1);
    printf("Area:%.2f\n", area1);
    printf("Pib:%.2f\n", pib1);
    printf("Numero de Pontos:%d\n", pontos1);

    printf("Insira os dados da segunda carta!\n");
    printf("Estado:\n");
    scanf("%s", &estado2);
    printf("Codigo:\n");
    scanf("%s", &cod_carta2);
    printf("Nome da Cidade:\n");
    scanf("%s", &nome_cidade2);
    printf("Populacao:\n");
    scanf("%d", &populacao2);
    printf("Area:\n");
    scanf("%f", &area2);
    printf("Pib:\n");
    scanf("%f", &pib2);
    printf("Numero de Pontos:\n");
    scanf("%d", &pontos2);

    printf("Carta2:\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo:%s\n", cod_carta2);
    printf("Nome da Cidade:%s\n", nome_cidade2);
    printf("Populacao:%d\n", populacao2);
    printf("Area:%.2f\n", area2);
    printf("Pib:%.2f\n", pib2);
    printf("Numero de Pontos:%d\n", pontos2);

    return 0;
}   