//3) faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais.

#include <stdio.h>
#include <ctype.h>
int main(){

FILE *arquivo;
char nomeArquivo[30];
char caractere;
int numeroVogais = 0;

printf("Digite o nome do arquivo de texto:\n ");
scanf("%s", nomeArquivo);

arquivo = fopen(nomeArquivo, "r");
if (arquivo == NULL){
    printf("insira arquivos no formato (.txt)");
    return 1;
}   

while ( (caractere = fgetc(arquivo)) != EOF)
{

    caractere = tolower(caractere);
  // garantir que todas as letras do arquivo sejam tratadas como minúsculas antes de verificar se são vogais
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            numeroVogais++;
        }

}
    char mensagem[100];
    if (numeroVogais > 1){
       printf("O numero de vogais do arquivo é %d vogais\n", numeroVogais);
    } else if(numeroVogais < 1){
        printf("Não possui vogais no arquivo!\n");
        return 1;
    }
    else{
        printf("O numero de vogais do arquivo é %d vogal\n", numeroVogais);
    }

    return 0;
}
