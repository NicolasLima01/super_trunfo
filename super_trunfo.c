/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

Nome da Cidade: O nome da cidade. Tipo: char[] (string)

População: O número de habitantes da cidade. Tipo: int

Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

PIB: O Produto Interno Bruto da cidade. Tipo: float

Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#include <stdio.h>

int main()
{

    // declaração de variáveis

    char estado;
    char codigo[4], cidade[40];
    int populacao, pontosTuristicos;
    float area, pib;

    printf("------------------------------- SUPER TRUNFO ------------------------------- \n \n");

    //----------------------------------------------------------------------------

    // CARTA 1

    // recebendo dados

    printf("Cadastro da Primeira Carta \n \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código: \n");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: \n");
    getchar(); // Limpa o ENTER do buffer para não ter erro no fgets
    fgets(cidade, 50, stdin);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área (Km²): \n");
    scanf(" %f", &area);

    printf("Digite o PIB (Bilhões): \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos);

    // Mostrando valores

    printf("CARTA 1 \n \n");

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d \n", populacao);
    printf("Área (Km²): %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %d \n \n", pontosTuristicos);

    //----------------------------------------------------------------------------

    // CARTA 2

    // recebendo dados

    printf("Cadastro da Segunda Carta \n \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código: \n");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: \n");
    getchar(); // Limpa o ENTER do buffer para não ter erro no fgets
    fgets(cidade, 50, stdin);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos);

    // mostrando os valores

    printf("CARTA 2 \n");

    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d \n", populacao);
    printf("Área (Km²): %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Pontos Turísticos: %d \n", pontosTuristicos);

    return 0;
}