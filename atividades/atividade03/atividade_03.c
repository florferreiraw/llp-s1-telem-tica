#include <stdio.h >                                                                                                              

// Atividade 3 de Lógica e Linguagm de programação C - IFCE 1°Semestre-TELEMÁTICA
// Professor Ricardo Taveira
// Aluna: Francisca Lorena Ferreira.

// estrutura
struct Dados {
    char nome[30];
    int idade;
    int altura;  };

int main() {
    // Agora, crio uma instância da estrutura
    struct Dados dados;

    // Recebendo os dados 
    printf("Digite o nome:\n");
    fgets(dados.nome, sizeof(dados.nome), stdin);

    printf("Digite a idade:\n");
    scanf("%d", &dados.idade);
  
    printf("Digite a sua altura:\n");
    scanf("%d", &dados.altura);

    // Abrindo o arquivo para escrever os dados
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1; // Encerrar o programa com erro
    }

    // Gravando a estrutura no arquivo
    fprintf(arquivo, "%s%d", dados.nome, dados.idade, dados.altura);

    // Fechando o arquivo
    fclose(arquivo);

    printf("Dados gravados no arquivo com sucesso.");

    return 0;
}
