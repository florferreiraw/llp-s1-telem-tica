//Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.
#include <stdio.h>
  int main () {
    float Prova1, Prova2, Prova3, Media;
    printf("Digite a nota 1:\n");
      scanf("%f", &Prova1);
    printf("Digite a nota 2:\n");
      scanf("%f", &Prova2);
    printf("Digite a nota 3:\n");
      scanf("%f", &Prova3);
   
    Media = (Prova1*1 + Prova2*1 + Prova3*2) / 4;
    if (Media >= 60) {
      printf("media: %.2f\n", Media);
      printf("Aprovado!\n");}
    else {
      printf("Reprovado!");}
   
    return 0;
  }
