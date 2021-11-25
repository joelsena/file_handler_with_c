#include <stdio.h>
#include <stdlib.h>

void criar_arquivo(char *title) {
    // Ponteiro para um arquivo
    // FILE é definido no stdio.h
    FILE *pont_arq;

    // Criar/Abre o arquivo
    // "a" => se já existi o arq ele abre para adicionar, se não ele cria
    // "w" => sobrescreve todo o conteudo do arquivo
    pont_arq = fopen(title, "a");

    // Fecha o arquivo
    fclose(pont_arq);

    printf("Arquivo foi criado com sucesso!!!\n");
}

void alterar_arquivo(char *title) {
    FILE *pont_arq;
    char text[100];

    pont_arq = fopen(title, "a");

    if(pont_arq == NULL) {
        printf("Erro na abertura do arquivo!!!");
        return 1;
    }

    printf("Escreva uma palavra para testar gravação de arquivo: ");
    scanf("%s", &text);

    fprintf(pont_arq, "%s \n", text);

    fclose(pont_arq);
    printf("Dados gravados com sucesso!!!");
}

int main(void) {
    // criar_arquivo("arquivo.txt");
    alterar_arquivo("arquivo.txt");

    return 0;
}
