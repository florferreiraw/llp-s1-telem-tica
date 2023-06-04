//B)

#include <stdio.h>


int main(){
    FILE *arq;
    int linha = 0;
    //abrir o arquivo
    arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    //executar a leitura de caracteres até o fim do arquivo
    while(!feof(arq)){
        //leitura feita caractere por caractere
        if(getc(arq) == '\n')
            linha ++;
    }
    printf("Arquivo tem %d linhas", linha);
    //fechamento do arquivo//
    fclose(arq);
    return 0;
}
