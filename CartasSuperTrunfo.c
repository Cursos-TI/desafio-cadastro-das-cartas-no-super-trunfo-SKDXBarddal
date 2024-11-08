#include <stdio.h>

int main() {
    int populacao, codcidade, numptstur;
    char nome[20], codpais[5];
    float area, pib;
    
    printf("Código do país:\n");
    scanf("%s", &codpais);
        printf("Código da cidade:\n");
        scanf("%d", &codcidade);
            printf("Informe a população: \n");
            scanf("%d", &populacao);
                printf("Informe a área: \n");
                scanf("%f", &area);
                    printf("Informe o PIB: \n");
                    scanf("%f", &pib);
                        printf("Informe o número de pontos turísticos: \n");
                        scanf("%d", &numptstur);
    
    printf("\nCidade: %s%d\n", codpais,codcidade);
    printf("População: %d ", populacao);
    printf("pessoas\n");
    printf("Área: %f ", area);
    printf("km²\n");
    printf("PIB: R$ %f \n", pib);
    printf("Número de pontos turísticos: %d\n", numptstur);
    
        printf("\n*****PRÓXIMA CIDADE*****\n");
    return 0;
}
