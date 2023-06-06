//4) Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais e quantas são consoantes.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[30];
    char caractere;
    int numeroVogais = 0;
    int numeroConsoantes = 0;

    printf("Digite o nome do arquivo de texto:\n");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Insira arquivos no formato (.txt)\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere);

        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            numeroVogais++;
        } else if (isalpha(caractere)) {
            numeroConsoantes++;
        }
    }

    fclose(arquivo);

    if (numeroVogais > 1) {
        printf("O número de vogais do arquivo é %d vogais\n", numeroVogais);
    } else if (numeroVogais < 1) {
        printf("Não possui vogais no arquivo!\n");
        return 1;
    } else {
        printf("O número de vogais do arquivo é %d vogal\n", numeroVogais);
    }

    printf("O número de consoantes do arquivo é %d\n", numeroConsoantes);

    return 0;
}
