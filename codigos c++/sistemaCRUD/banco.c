#include <stdio.h>
#include <stdlib.h>

FILE* AbreArquivo(char modo, char caminho[30]){
    FILE *arquivo;
    switch(modo){
        case 'g':
            arquivo = fopen(caminho,"wt");
            break;
        case 'l':
            arquivo = fopen(caminho,"rt");
            break;
        case 'a':
            arquivo = fopen(caminho,"a");
            break;
    }
    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontará para NULL
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }
    return arquivo;
}

void FecharArquivo(FILE *arquivo){
    fclose(arquivo);
}

void Cadastra(char nome[30], int telefone){
    FILE *arquivo;
    arquivo = AbreArquivo('a', "vendas.txt");
    fprintf(arquivo, "%s %d\n", nome, telefone);
    FecharArquivo(arquivo);
}

void Listar(){
    FILE *arquivo;
    char nome[30];
    int telefone;

    arquivo = AbreArquivo('l',"vendas.txt");

    while(!feof(arquivo)){
        fscanf(arquivo,"%s %d ", &nome, &telefone);
        printf("Nome: %s  -  Telefone: %d\n", nome, telefone);
    }
    FecharArquivo(arquivo);
}

int main(){
    int opcao;
    char nome[30];
    int telefone;
    do{
        system("clear");
        printf("\n\n\t\tBem Vindo ao programa AGENDA\n"); //cout
        printf("\nMENU");
        printf("\n 1 - Registrar Venda");
        printf("\n 2 - Listar venda");
        printf("\n 3 - Sair");

        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);
        system("clear");

        switch(opcao){
            case 1:
                printf("\nDigite o nome: ");
                setbuf(stdin,NULL);
                gets(nome);
                printf("\nDigite o telefone: ");
                scanf("%d", &telefone);
                Cadastra(nome, telefone);
                system("clear");
                break;
            case 2:
                Listar();
                system("clear");
                break;
            case 3:
                printf("\n\nFinalizando...\n\n");
                system("clear");
                exit(0);
                break;

            default:
                printf("\n\nOpcao invalida! Tente Novamente!\n\n");
                system("clear");

        }
    }while(opcao!=3);

    return 0;
}
