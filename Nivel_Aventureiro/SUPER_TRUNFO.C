#include <stdio.h>
#include <string.h>

// Estrutura da carta de país
struct CartaPais {
    char nomePais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main() {
    // ===== Cartas de países =====
    struct CartaPais carta1 = {
        "Brasil", 12325000, 11521.11, 699.28, 30, 0.0
    };

    struct CartaPais carta2 = {
        "França", 6748000, 1200.25, 300.50, 50, 0.0
    };

    // ===== Cálculo da densidade demográfica =====
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // ===== Menu de seleção de atributo =====
    int opcao;
    printf("=== Super Trunfo - Comparação de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // ===== Exibição das cartas =====
    printf("\n=== Resultado da Comparação ===\n");
    printf("Carta 1: %s\n", carta1.nomePais);
    printf("Carta 2: %s\n", carta2.nomePais);

    // ===== Comparação com switch e if-else =====
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", carta1.nomePais, carta1.populacao);
            printf("%s: %lu\n", carta2.nomePais, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomePais);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nomePais, carta1.area);
            printf("%s: %.2f km²\n", carta2.nomePais, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomePais);
            else if (carta2.area > carta1.area)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", carta1.nomePais, carta1.pib);
            printf("%s: R$ %.2f bilhões\n", carta2.nomePais, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomePais);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomePais, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomePais);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nomePais, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nomePais, carta2.densidade);
            if (carta1.densidade < carta2.densidade)
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomePais);
            else if (carta2.densidade < carta1.densidade)
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}