#include <stdio.h>
#include <stdlib.h>

//Atividade de Linguagem de Lógica e Programação IFCE
//Implementar um programa em C que faz :
//1) Imprime a diagonal principal de uma matriz quadrada qualquer;
//2) Calcula a matriz soma de duas matrizes quadradas.

//1:

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

//2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main() {
  int m1 [4][4] = {1,2,3,4, 1,2,3,4, 1,2,3,4, 1,2,3,4};
  int m2 [4][4] = {4,3,2,1, 5,6,7,8, 8,7,6,5, 1,2,3,4};
  int resultante [4][4];
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      resultante [i][j] = m1[i][j]+m2[i][j];
  }

}
printf("\n Matriz soma: \n");
for(int k=0; k<4; k++) {
printf("\n");
  for(int l=0; l<4; l++) {
printf("%d, ", resultante [k][l]);

  }
}
return 0;
}
