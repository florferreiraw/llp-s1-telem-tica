//Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto
//contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.
  
#include <stdio.h>
#include <ctype.h>

int main(){
    char nomeArquivoEntrada[30];
    char nomeArquivoSaida[30];
    char caractere;
    FILE *arquivoEntrada;
    FILE *arquivoSaida;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada != NULL && arquivoSaida != NULL ){
        while ((caractere = fgetc(arquivoEntrada)) != EOF) {
            caractere = tolower(caractere);
 
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                caractere = '*';
            }
        
            fprintf(arquivoSaida, "%c", caractere);
        }   
        
        fclose(arquivoEntrada);
        fclose(arquivoSaida);
            
        printf("O arquivo de saida foi criado com sucesso!\n");
    } else {
        printf("Erro ao abrir os arquivos de entrada ou saída.\n");
    }   
    
    return 0;
}
