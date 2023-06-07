//5) Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela quantas vezes esse caractere ocorre dentro do arquivo.

#include <stdio.h>
#include <ctype.h>

int main(){

    FILE *arquivo;
    char caractere; 
    char cConsulta;
    char nomeARQ[30];
    int numC = 0;
    
printf("Entre com um caractere para fazer a consulta: ");
scanf("%c", &cConsulta);

printf("Digite o nome do arquivo de texto: ");
scanf("%s", &nomeARQ);

arquivo = fopen(nomeARQ, "r");
if (arquivo != NULL){
    while ( (caractere = fgetc(arquivo)) != EOF){

    caractere = tolower(caractere);
    
    if (caractere >= 'a' && caractere <= 'z' || caractere >= '0' && caractere){
         if (caractere == cConsulta) {
                 numC++;
            }
    }
    }
}

printf("A letra (%c) aparece (%d) vezes. ",cConsulta, numC);

    return 0;
}
