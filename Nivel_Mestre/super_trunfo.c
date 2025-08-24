#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Dados das cartas
    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Dados do País 1
    char nome1[] = "Brasil";
    int populacao1 = rand() % 300000000 + 10000000;       // entre 10M e 310M
    float area1 = (float) (rand() % 8000000 + 1000000);  // entre 1M e 9M km²
    float pib1 = (float)(rand() % 5000 + 1000) * 1e9;   // entre 1 tri e 6 tri
    int pontosTuristicos1 = rand() % 10000 + 100;      // entre 100 e 10100
    // Dados do País 2
    char nome2[] = "Argentina";
    int populacao2 = rand() % 300000000 + 10000000;      // entre 10M e 310M
    float area2 = (float) (rand() % 8000000 + 1000000); // entre 1M e 9M km²
    float pib2 = (float) (rand() % 5000 + 1000) * 1e9; // entre 1 tri e 6 tri
    int pontosTuristicos2 = rand() % 10000 + 100;     // entre 100 e 10100

    // Variáveis de controle
    char atributo1, atributo2;
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;


    // Menu de atributos
    printf("\nBem-vindo ao jogo de comparação de cidades!\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("B. PIB\n");
    printf("T. Pontos Turísticos\n");
    printf("Escolha: ");
    scanf(" %c", &atributo1);

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    switch (atributo1) {
        case 'P': case 'p':
            printf("A. Área\nB. PIB\nT. Pontos Turísticos\n");
            break;
        case 'A': case 'a':
            printf("P. População\nB. PIB\nT. Pontos Turísticos\n");
            break;
        case 'B': case 'b':
            printf("P. População\nA. Área\nT. Pontos Turísticos\n");
            break;
        case 'T': case 't':
            printf("P. População\nA. Área\nB. PIB\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("Escolha: ");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você escolheu o mesmo atributo duas vezes. Fim do jogo.\n");
        return 0;
    }

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 'P': case 'p':
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;
        case 'A': case 'a':
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;
        case 'B': case 'b':
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;
        case 'T': case 't':
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 'P': case 'p':
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;
        case 'A': case 'a':
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;
        case 'B': case 'b':
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;
        case 'T': case 't':
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    // Soma dos atributos
    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    // Exibição dos resultados
    printf("\n Resultado da Comparação:\n");
    printf("Cidade 1: %s\n", nome1);
    printf("Cidade 2: %s\n", nome2);
    printf("Atributo 1: %.2f vs %.2f\n", valor1Carta1, valor1Carta2);
    printf("Atributo 2: %.2f vs %.2f\n", valor2Carta1, valor2Carta2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, somaCarta1);
    printf("%s: %.2f\n", nome2, somaCarta2);

    // Veredito
    if (somaCarta1 > somaCarta2) {
        printf("🏆 %s venceu a rodada!\n", nome1);
    } else if (somaCarta2 > somaCarta1) {
        printf("🏆 %s venceu a rodada!\n", nome2);
    } else {
        printf("⚖️ Empate!\n");
    }

    return 0;
}
