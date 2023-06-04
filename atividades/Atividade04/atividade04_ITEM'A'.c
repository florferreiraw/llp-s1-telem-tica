//A) Ler um número inteiro. Se o número lido for negativo, escreva a mensagem "Número inválido". Se o número for positivo, calcular o logaritmo deste numero.
#include <stdio.h>
#include <math.h> //BIBLIOTECA PARA OPERAÇÕES MATEMÁTICAS


int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido\n");
    } else {
        double logaritmo = log10(numero);
        printf("O logaritmo na base 10 do número é: %.2f\n", logaritmo);
    }

    return 0;
}
