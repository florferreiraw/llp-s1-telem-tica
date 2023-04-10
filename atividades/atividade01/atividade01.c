#include <stdio.h>
#include <stdlib.h>

\\Atividade de Linguagem de Lógica e Programação IFCE
\\Implementar um programa em C que faz :
\\1) Imprime a diagonal principal de uma matriz quadrada qualquer:


int main () {
  int tam = 5;
  int l,c, mat[tam][tam];

  srand(time(NULL));

  for(l=0;l<tam;l++){
    for(c=0;c<tam;c++){
        mat[l][c] = rand() %100;
    }
  }
  
  for(l=0;l<tam;l++){
    for(c=0;c<tam;c++){
      if(l==c)
        printf("%d ", mat[l][c]);
      else
        printf(" ");
    }
    printf("\n");
  }
    return 0;
}
