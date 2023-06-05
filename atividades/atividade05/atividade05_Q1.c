// Lógica e Linguagem de Programação, TELEMÁTICA - S1
// Professor: Ricardo Taveira
// Aluno: Francisca Lorena Ferreira

//A) Escreva um programa que:
//Crie/abra um arquivo texto de nome “arq.txt”
//Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
//Feche o arquivo
//Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos oscaracteres armazenados.


#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arq.txt", "w");

    // Permite que o usuário grave diversos caracteres no arquivo
    char caractere;
    while (1) {
        printf("Digite um caractere: ");
        scanf(" %c", &caractere);
        getchar(); 
        if (caractere == '0') {
            break;
        }
        fputc(caractere, arquivo);
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Abre e lê o arquivo, caractere por caractere, e escreve na tela
    arquivo = fopen("arq.txt", "r");
    printf("Caracteres armazenados:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c\n", caractere);
    }

    // Fechando o arquivo novamente
    fclose(arquivo);

    return 0;
}
