#include <stdio.h>

int main() {
    char estado1[3], estado2[3];  // Array para armazenar as siglas dos estados
    float populacao1 = 6.2, populacao2 = 11.0;
    float area1 = 1.200, area2 = 1.521;
    float pib1 = 1.15, pib2 = 3.5;
    int pontos_turistico1 = 58, pontos_turistico2 = 36;

    // Entrada dos estados
    printf("Digite a sigla do estado da carta 1: ");
    scanf("%2s", estado1);  // %2s para evitar buffer overflow

    printf("Digite a sigla do estado da carta 2: ");
    scanf("%2s", estado2);

    // Comparações
    printf("Qual das duas cartas tem mais população?\n");
    if (populacao1 > populacao2) {
        printf("%s tem mais população que %s (%.1f milhões vs %.1f milhões)\n", estado1, estado2, populacao1, populacao2);
    } else {
        printf("%s tem mais população que %s (%.1f milhões vs %.1f milhões)\n", estado2, estado1, populacao2, populacao1);
    }

    printf("Qual das duas cartas tem maior área?\n");
    if (area1 > area2) {
        printf("%s tem maior área que %s (%.3f km² vs %.3f km²)\n", estado1, estado2, area1, area2);
    } else {
        printf("%s tem maior área que %s (%.3f km² vs %.3f km²)\n", estado2, estado1, area2, area1);
    }

    printf("Qual das duas cartas tem o maior PIB?\n");
    if (pib1 > pib2) {
        printf("%s tem maior PIB que %s (%.2f trilhões vs %.2f trilhões)\n", estado1, estado2, pib1, pib2);
    } else {
        printf("%s tem maior PIB que %s (%.2f trilhões vs %.2f trilhões)\n", estado2, estado1, pib2, pib1);
    }

    printf("Qual das duas cartas tem mais pontos turísticos?\n");
    if (pontos_turistico1 > pontos_turistico2) {
        printf("%s tem mais pontos turísticos que %s (%d vs %d)\n", estado1, estado2, pontos_turistico1, pontos_turistico2);
    } else {
        printf("%s tem mais pontos turísticos que %s (%d vs %d)\n", estado2, estado1, pontos_turistico2, pontos_turistico1);
    }

    printf("%s é a carta vencedora!\n", (pib2 > pib1) ? estado2 : estado1);
    
    return 0;
}