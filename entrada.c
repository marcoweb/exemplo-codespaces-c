#include <stdio.h>

int main() {
    FILE *arquivo;

    arquivo = fopen("dados.in", "r");

    if(arquivo == NULL) {
        printf("Erro na leitura do arquivo\n");
        return 1;
    }

    char linha[256];
    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    printf("\n");

    fclose(arquivo);

    return 0;
}