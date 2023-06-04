//programa que calcule e mostre a área de um trapézio:

#include <stdio.h>
int main () {
  float baseMaior, baseMenor, altura, area;
printf("Digite o valor da base menor do trapézio:\n");
  scanf("%f",&baseMenor);
printf("Digite o valor da base maior do trapézio:\n");
  scanf("%f", &baseMaior);
printf("Digite o valor da altura do trapézio:\n");
  scanf("%f", &altura);
  
if (baseMenor <= 0 || baseMaior <= 0 || altura <= 0) {
  printf("Os valores devem ser números maiores do que zero"); }
 area = ((baseMenor + baseMaior) * altura) / 2;
  printf("A área do trapézio é: %.2f\n", area);
  return 0;
}
