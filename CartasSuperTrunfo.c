#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
 /*
    int populacao;
    int pib;
    int area;
    int densidade;
    int turismo;
    int superpoder;
    int pibpercapta;
*/
    int NumeroCaso;
    char codEstado1;
    int carta1 = 0;
    int carta2 = 0;
    int codCidade1;
    char nomeCidade1[256];
    char codCarta1;
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numpontoturistico1;
    float superpoder1;
    char codEstado2;
    int codCidade2;
    char nomeCidade2[256];
    char codCarta2;
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numpontoturistico2;
    float superpoder2;
    float densidadepop1;
    float pibpercapta1;
    float densidadepop2;
    float pibpercapta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("***********Cadastro das Carta do Super Trungo***********\n\n");
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


    printf("\n\nCartas Cadastradas com Sucesso!\n\n\n");

    //Exibição dos itens da primeira carta
    printf("Estado: %c.\n", codEstado1);
    printf("Código: %c%d.\n", codEstado1, codCidade1);
    printf("Nome da Cidade: %s.\n", nomeCidade1);
    printf("População: %.2f pessoas.\n", populacao1);
    printf("Area: %.2f km².\n", area1);
    printf("PIB: R$ %.2f mil.\n", pib1);
    printf("Número de Pontos Turísticos: %d.\n", numpontoturistico1);
    densidadepop1 = populacao1/area1;
    printf("Densidade Populacional: %.2f.\n", densidadepop1);
    pibpercapta1 = pib1/populacao1;
    printf("PIB per Capta: %.2f.\n\n\n", pibpercapta1);
    superpoder1 = populacao1 + area1 + pib1 + numpontoturistico1 + pibpercapta1 + (1/densidadepop1);
    printf("O 'Super Poder' dessa carta é de %.2f\n\n", superpoder1);

    //Exibição dos itens da segunda carta
    printf("Estado: %c.\n", codEstado2);
    printf("Código: %c%d.\n", codEstado2, codCidade2);
    printf("Nome da Cidade: %s.\n", nomeCidade2);
    printf("População: %.2f pessoas.\n", populacao2);
    printf("Area: %.2f km².\n", area2);
    printf("PIB: R$ %.2f mil.\n", pib2);
    printf("Número de Pontos Turísticos: %d.\n", numpontoturistico2);
    densidadepop2 = populacao2/area2;
    printf("Densidade Populacional: %.2f.\n", densidadepop2);
    pibpercapta2 = pib2/populacao2;
    printf("PIB per Capta: %.2f.\n\n", pibpercapta2);
    superpoder2 = populacao2 + area2 + pib2 + numpontoturistico2 + pibpercapta2 + (1/densidadepop2);
    printf("O 'Super Poder' dessa carta é de %.2f\n\n", superpoder2);


    //Comparações para definir o vencedor. As variáveis carta1 e carta 2 são os placares, de acordo com cada vitória
    NumeroCaso = 1 + ( rand() % 10 );

    switch (NumeroCaso)
    {
        case 1 :
        //Comparação POPULAÇÃO
        if (populacao1>populacao2) {
        printf("Carta %c%d venceu o confronto entre POPULAÇÕES.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
        }else {
        printf("Carta %c%d venceu o confronto entre POPULAÇÕES.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
        }
        break;

        case 2:
        //Comparação ÁREA
        if (area1>area2) {
        printf("Carta %c%d venceu o confronto entre suas ÁREAS.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
        }else {
        printf("Carta %c%d venceu o confronto entre suas ÁREAS.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
        }
        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 6:

        break;

        case 7:

        break;
    }



   

    //Comparação PIB
    if (pib1>pib2) {
        printf("Carta %c%d venceu o confronto entre o valor do seu PIB.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }else {
        printf("Carta %c%d venceu o confronto entre o valor do seu PIB.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }

    //Comparação NÚMERO DE PONTOS TURÍSTICOS
    if (numpontoturistico1>numpontoturistico2) {
        printf("Carta %c%d venceu o confronto entre a Quantidade de PONTOS TURÍSTICOS.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }else {
        printf("Carta %c%d venceu o confronto entre a Quantidade de PONTOS TURÍSTICOS.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }

    //Comparação DENSIDADE POPULACIONAL
    if (populacao1<populacao2) {
        printf("Carta %c%d venceu o confronto entre DENSIDADE POPULACIONAL.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }else {
        printf("Carta %c%d venceu o confronto entre DENSIDADE POPULACIONAL.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }

    //Comparação PIB PER CAPTA
    if (pibpercapta1>pibpercapta2) {
        printf("Carta %c%d venceu o confronto entre PIB PER CAPTA.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }else {
        printf("Carta %c%d venceu o confronto entre PIB PER CAPTA.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }

    printf("\n\nPor enquanto o PLACAR GERAL é %c%d %d x %d %c%d. Vamos para o último embate!\n\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);

    //Comparação SUPER PODER
    if (superpoder1>superpoder2) {
        printf("Pela união de seus poderes, a carta %c%d venceu o confronto entre seus SUPER PODERES.", codEstado1, codCidade1);
        carta1++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }else {
        printf("Pela união de seus poderes, a carta %c%d venceu o confronto entre seus SUPER PODERES.", codEstado2, codCidade2);
        carta2++;
        printf("             Placar: %c%d  %d x %d  %c%d.\n", codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2);
    }
    
    //Comparação final, declarando o vencedor geral.
    if (carta1>carta2) {
        printf("E O VENCEDOR DO EMBATE É A CARTA %c%d, COM UM PLACAR DE %c%d %d x %d %c%d. PARABÉNS PARA O POVO DE %s.\n", codEstado1, codCidade1, codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2, nomeCidade1);
    }else {
        printf("E O VENCEDOR DO EMBATE É A CARTA %c%d, COM UM PLACAR DE %c%d %d x %d %c%d. PARABÉNS PARA O POVO DE %s.\n", codEstado2, codCidade2, codEstado1, codCidade1, carta1, carta2, codEstado2, codCidade2, nomeCidade2);
    }

        return 0;
}
