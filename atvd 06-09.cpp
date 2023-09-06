#include <stdio.h>
#include <windows.h>
#include <errno.h>
#include <string.h>

int main() {
    char resp;

    // Verifica se o arquivo "novo.txt" pode ser acessado (se ele existe)
    FILE *arquivo = fopen("nov.txt", "r");
    
    if (arquivo != NULL) {
        fclose(arquivo); // Fecha o arquivo ap�s a verifica��o
        system("start novo.txt"); // Abre o arquivo "novo.txt" se existir
    } else {
        // O arquivo n�o existe ou ocorreu algum erro
        printf("Erro ao abrir o arquivo: %s\n", strerror(errno));
        perror("Erro ao abrir o arquivo: ");
    }

    return 0;
}

