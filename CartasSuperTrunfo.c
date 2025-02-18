#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codEstado1;
    int codCidade1;
    char nomeCidade1[256];
    char codCarta1;
    float populacao1;
    float area1;
    float pib1;
    int numpontoturistico1;
    char codEstado2;
    int codCidade2;
    char nomeCidade2[256];
    char codCarta2;
    float populacao2;
    float area2;
    float pib2;
    int numpontoturistico2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastro da Carta 1\n");
    printf("Insira o Código do Estado (Letras entre A a H):\n");
    scanf("%c", &codEstado1);
    printf("Insira o Código da Cidade (Números de 01 à 04):\n");
    scanf("%d", &codCidade1);
    while (getchar() != '\n'); //Código usado para limpar o buffer e permitir que o fgets não "capture" o \n que o scanf deixa como resíduo
    printf("Insira o Nome da Cidade:\n");
    //Usei o fgets para ler o nome da cidade com os espaços
    fgets(nomeCidade1,50,stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("Insira a População da Cidade:\n");
    scanf("%f", &populacao1);
    printf("Insira a Área da Cidade:\n");
    scanf("%f", &area1);
    printf("Insira o Valor do PIB da Cidade:\n");
    scanf("%f", &pib1);
    printf("Insira o Número de Pontos Turístico Existentes na Cidade:\n");
    scanf("%d", &numpontoturistico1);

    printf("Cadastro da Carta 2\n");
    while (getchar() != '\n'); //Código usado para limpar o buffer e permitir que o fgets não "capture" o \n que o scanf deixa como resíduo
    printf("Insira o Código do Estado (Letras entre A a H):\n");
    scanf(" %c", &codEstado2);
    printf("Insira o Código da Cidade (Números de 01 à 04):\n");
    scanf("%d", &codCidade2);
    while (getchar() != '\n'); //Código usado para limpar o buffer e permitir que o fgets não "capture" o \n que o scanf deixa como resíduo
    printf("Insira o Nome da Cidade:\n");
    fgets(nomeCidade2,50,stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Insira a População da Cidade:\n");
    scanf("%f", &populacao2);
    printf("Insira a Área da Cidade:\n");
    scanf("%f", &area2);
    printf("Insira o Valor do PIB da Cidade:\n");
    scanf("%f", &pib2);
    printf("Insira o Número de Pontos Turístico Existentes na Cidade:\n");
    scanf("%d", &numpontoturistico2);


 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nCarta Cadastrada com Sucesso!\n\n");
    printf("Estado: %c.\n", codEstado1);
    printf("Código: %c%d.\n", codEstado1, codCidade1);
    printf("Nome da Cidade: %s.\n", nomeCidade1);
    printf("População: %.2f pessoas.\n", populacao1);
    printf("Area: %.2f km².\n", area1);
    printf("PIB: R$ %.2f mil.\n", pib1);
    printf("Número de Pontos Turísticos: %d.\n\n", numpontoturistico1);

    printf("Estado: %c.\n", codEstado2);
    printf("Código: %c%d.\n", codEstado2, codCidade2);
    printf("Nome da Cidade: %s.\n", nomeCidade2);
    printf("População: %.2f pessoas.\n", populacao2);
    printf("Area: %.2f km².\n", area2);
    printf("PIB: R$ %.2f mil.\n", pib2);
    printf("Número de Pontos Turísticos: %d.\n", numpontoturistico2);
    
    return 0;
}
