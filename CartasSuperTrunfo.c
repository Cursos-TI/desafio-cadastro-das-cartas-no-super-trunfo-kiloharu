#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codEstado;
    int codCidade;
    char nomeCidade[20];
    char codCarta;
    float populacao;
    float area;
    float pib;
    int numpontoturistico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira o Código do Estado (Letras entre A a H):\n");
    scanf("%c", &codEstado);
    printf("Insira o Código da Cidade (Números de 01 à 04):\n");
    scanf("%d", &codCidade);
    printf("Insira a População da Cidade:\n");
    scanf("%f", &populacao);
    printf("Insira a Área da Cidade:\n");
    scanf("%f", &area);
    printf("Insira o Valor do PIB da Cidade:\n");
    scanf("%f", &pib);
    printf("Insira o Número de Pontos Turístico Existentes na Cidade:\n");
    scanf("%d", &numpontoturistico);
    printf("Insira o Nome da Cidade:\n");
    scanf("%s", &nomeCidade);
 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nCarta Cadastrada com Sucesso!\n");
    printf("Carta registrada com o código %c%d.\n", codEstado, codCidade);
    printf("A cidade registrada foi %s.\n", nomeCidade);
    printf("Sua população é de %.2f pessoas.\n", populacao);
    printf("Sua área é de %.2fm².\n", area);
    printf("Possui um PIB de R$ %.2f.\n", pib);
    printf("A cidade possui %d ponto(s) turístico(s).\n", numpontoturistico);
    
    return 0;
}
