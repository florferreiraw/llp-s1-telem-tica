//6) Faça um programa em c que receba do usuário um arquivo texto e mostre na tela quantas vezes cada letra do alfabeto aparece dentro do arquivo

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[200];
    char caractere;
    int contagem[26] = {0}; 

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo, insira um arquivo válido.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) { //ver se o caractere é uma letra
            caractere = toupper(caractere);
            contagem[caractere - 'A']++; // Incrementa a contagem da letra correspondente
        }
    }

    fclose(arquivo);

    printf("Quantidade de vezes que cada letra do alfabeto se repete no arquivo:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, contagem[i]);
    }

    return 0;
}
