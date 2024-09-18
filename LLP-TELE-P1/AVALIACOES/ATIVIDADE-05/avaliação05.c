#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[150];

    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }


    printf("Digite as linhas de texto (digite 'sair' para terminar):\n");
    while (1) {
        printf("> ");
        fgets(linha, 150, stdin);
        linha[strcspn(linha, "\n")] = 0; // remove 
        if (strcmp(linha, "sair") == 0) {
            break;
        }
        fprintf(arquivo, "%s\n", linha);
    }

    fclose(arquivo);

    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, 100, arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}