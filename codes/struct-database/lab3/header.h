#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
void preencher(struct cadastro x[MAX]);
void imprimir(struct cadastro x[MAX]);
void imprimir_todos(struct cadastro x[MAX]);

void preencher(struct cadastro x[MAX])
{
    for(int i=0; i<MAX; i++)
    {
        printf("Registre o numero de matricula:");
        printf(">> ");
        scanf("%d", &x[i].matricula);
        getchar();

        printf("Digite o nome do aluno:");
        printf("\n>> ");
        fflush(stdin);
        fgets(x[i].nome, 100, stdin);

        printf("\nRegistre o endereco do aluno: ");
        printf(">> ");
        fflush(stdin);
        fgets(x[i].endereco, 150, stdin);

        printf("Numero de telefone ou celular:");
        printf(">> ");
        fflush(stdin);
        fgets(x[i].telefone, 30, stdin);
    }
}

/*void remover(alunos[MAX])
{

}*/

void imprimir(struct cadastro x[MAX])
{
    int aux, aux2=0;
    printf("\nDigite o numero da matricula desejada:\n");
    printf(">> ");
    scanf("%d", &aux);
    getchar();

    for(int i=0; i<MAX; i++)
    {
        if(aux == x[i].matricula)
           {
                aux2 = x[i].matricula;
                printf("NOME:      %s\n", x[i].nome);
                printf("MATRICULA: %d\n", x[i].matricula);
                printf("CONTATO:   %s\n", x[i].telefone);
                printf("ENDERECO:  %s\n", x[i].endereco);
           }break;
    }
    if(aux2!=aux)printf("Matricula Invalida!\n");
}

void imprimir_todos(struct cadastro x[MAX])
{
    for(int i=0; i<MAX;  i++)
    {
       printf("NOME:      %s\n", x[i].nome);
       printf("MATRICULA: %d\n", x[i].matricula);
       printf("CONTATO:   %s\n", x[i].telefone);
       printf("ENDERECO:  %s\n", x[i].endereco);
    }

}


#endif // HEADER_H_INCLUDED
