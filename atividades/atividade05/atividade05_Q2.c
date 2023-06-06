//2) Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui.

#include <stdio.h>

int main(){
  FILE *arquivo;
  char nomeARQ[30];
  char caractere;
  int quantLinhas = 1;
//iniciei com 1 para que a primeira linha pudesse ser contada
  printf("Nome do arquivo:\n ");
  scanf("%s", &nomeARQ);
//abertura do arquivo
  arquivo = fopen(nomeARQ, "r");
  if (arquivo != NULL){
    while ((caractere = fgetc(arquivo)) != EOF){
      if (caractere == '\n'){
        quantLinhas++;
      }
    }
  }
  fclose(arquivo);

  printf("O arquivo possui %d linhas.\n", quantLinhas);
  return 0;
}
