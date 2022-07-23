#define MAX 5
#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro
{
    char nome[100];
    char endereco[150];
    char telefone[30];
    int matricula;
}alunos;

void preencher(alunos *PAluno);
void imprimir(alunos *PAluno);
void imprimir_todos(alunos *PAluno);

void preencher(alunos* PAluno)
{
    printf("\n==============================================================");
    for(int i=0; i<MAX; i++)
    {
        printf("\nRegistre o numero de matricula:\n");
        printf(">> ");
        scanf("%d", &PAluno[i].matricula);
        getchar();

        printf("Digite o nome do aluno:");
        printf("\n>> ");
        fflush(stdin);
        fgets(PAluno[i].nome, 100, stdin);

        printf("Registre o endereco do aluno:\n");
        printf(">> ");
        fflush(stdin);
        fgets(PAluno[i].endereco, 150, stdin);

        printf("Numero de telefone ou celular:\n");
        printf(">> ");
        fflush(stdin);
        fgets(PAluno[i].telefone, 30, stdin);
        printf("\n==============================================================");
    }
}

void imprimir(alunos* PAluno)
{
    int aux, aux2=0;
    printf("\nDigite o numero da matricula desejada:\n");
    printf(">> ");
    scanf("%d", &aux);
    getchar();

    for(int i=0; i<MAX; i++)
    {
        if(aux == PAluno[i].matricula)
           {
                aux2 = PAluno[i].matricula;
                printf("\nNOME:      %s", PAluno[i].nome);
                printf("MATRICULA: %d\n", PAluno[i].matricula);
                printf("CONTATO:   %s", PAluno[i].telefone);
                printf("ENDERECO:  %s", PAluno[i].endereco); break;
           }
    }
    if(aux2!=aux)printf("Matricula Invalida!\n");
}

void imprimir_todos(alunos* PAluno)
{
    for(int i=0; i<MAX;  i++)
    {
       printf("\nNOME:      %s", PAluno[i].nome);
       printf("MATRICULA: %d\n", PAluno[i].matricula);
       printf("CONTATO:   %s", PAluno[i].telefone);
       printf("ENDERECO:  %s", PAluno[i].endereco);
    }

}

int main()
{

    int op, op1;
    char loop, loop2;
do{
    alunos* PAluno = NULL;
    PAluno = (alunos*)malloc(MAX*sizeof(alunos));

        printf("BANCO DE DADOS DO PROFESSOR\n");
        printf("Escolha um das opcoes abaixo:\n");
        printf(">> Cadastrar nomes ------------------------- [1]\n");
        printf(">> Fechar programa ------------------------- [2]\n");
        printf("\n>> ");
        scanf("%d", &op);
        getchar();

        switch(op)
        {
            case 1: preencher(PAluno); break;
            case 2: exit(1);
        }
        printf("\nPressione qualquer tecla para continuar\n");
        getchar();
    do{
        printf("Escolha um das opcoes abaixo:\n");
        printf(">> Exibir dados do aluno --------------------------------- [1]\n");
        printf(">> Exibir todos os dados registrados --------------------- [2]\n\n");
        printf(">> ");
        scanf("%d", &op1);
        getchar();

    do{
        switch(op1)
        {
            case 1: imprimir(PAluno); break;
            case 2: imprimir_todos(PAluno); break;
            default: printf("Opcao Invalida, Tente Novamente --------- [ENTER]\n");
            getchar();
        }
    }while((op1!=1) && (op1!=2));

        printf("\nDeseja retornar ao menu de exibicao de dados do aluno?\n");
        printf("[R] para RETORNAR\n[N] para NAO RETORNAR\n");
        printf(">> ");
        scanf("%c", &loop);
        getchar();
        printf("\n");
        loop = toupper(loop);

        }while(loop=='R');

        printf("\nESCOLHA UMA OPCAO\n");
        printf("[S] para SAIR\n[R] para REINICIAR O PROGRAMA\n");
        printf(">> ");
        scanf("%c", &loop2);
        getchar();
        printf("\n");
        loop2 = toupper(loop2);
        free(PAluno);
}while(loop2=='R');

    getchar();
    return 0;
}
