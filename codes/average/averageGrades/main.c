#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, n;
    float totalAlunos = 0, avaliacoes = 0, notas[(int)totalAlunos][(int)avaliacoes];
    float medias[(int)totalAlunos], somaAluno[(int)totalAlunos];

    printf("=============================================================\n");
    printf("\t     << BANCO DE DADOS DO PROFESSOR >>\n");
    printf("=============================================================\n");

    do{
    printf("Informe o numero de avaliações totais >> ");
    scanf("%f", &avaliacoes);
    if((avaliacoes<0) || (avaliacoes!=(int)avaliacoes))
        printf("ERROR: Informe um valor inteiro e positivo\n\n");
    getchar();
    }while((avaliacoes<0) || (avaliacoes!=(int)avaliacoes));

    printf("Informe o numero de alunos que realizaram as avaliacoes >> ");
    scanf("%f", &totalAlunos);
    printf("\nDigite as %.0f notas do aluno 1:\n", avaliacoes);

    for(i=0; i < totalAlunos; ++i){
        for(n=0; n < avaliacoes; ++n){
            printf(">> ");
            scanf("%f", &notas[i][n]);
            somaAluno[i] = somaAluno[i] + notas[i][n];
        }
        printf("\nDigite as %.0f notas do aluno %i\n", avaliacoes, i + 2);
    }

    for(i=0; i < totalAlunos; ++i){
        medias[i] = somaAluno[i] / avaliacoes;
        printf(">> A media do aluno %i eh: %.2f\n", i + 1, medias[i]);
    }

    system("pause");
    return 0;
}
