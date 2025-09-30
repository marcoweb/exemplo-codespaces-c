#include <stdio.h>

int main() {
    FILE *arquivo_saida;

    arquivo_saida = fopen("dados.txt", "w");

    if(arquivo_saida == NULL) {
        printf("Erro na leitura do arquivo\n");
        return 1;
    }

    fprintf(arquivo_saida, "Olá Arquivo de Saída\n");
    fprintf(arquivo_saida, "Nova Linha");

    fclose(arquivo_saida);

    return 0;
}