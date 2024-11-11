#include <stdio.h>

int main() {
    int populacao, codcidade, numptstur;
    char codpais[5];
    float area, pib;
    float densidade;
    float pibpercapta;
    
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
            printf("de habitantes\n");
                printf("Área: %.0f ", area);
                    printf("km²\n");
                        printf("PIB: R$ %.2f \n", pib);
                            printf("Número de pontos turísticos: %d\n", numptstur);
    
    densidade = (float) populacao / area;
        printf("\nDensidade populacional: %.2f\n", densidade);

    pibpercapta = (float) pib / populacao;
        printf("PIB per Capta: R$ %.2f\n", pibpercapta);

    printf("\n*****PRÓXIMA CIDADE*****\n");

    return 0;


}
