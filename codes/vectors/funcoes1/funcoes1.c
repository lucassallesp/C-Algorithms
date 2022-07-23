#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculo(float a);
void atualizar(float *w, char letra);
void soma_dobro_ref(int *x, int *y, int *soma);

void soma_dobro_ref(int *x, int *y, int *soma)
{
    *x = *x*(2);
    *y = *y*(2);
    *soma = *x + *y;
}

float calculo(float a)
{
    float somaCalculo;

    somaCalculo = log10(a) + pow(a,3);
    return somaCalculo;
}

void atualizar(float *w, char letra)
{
    switch(letra)
    {
        case 'E': *w = *w + 10.4; break;
        case 'D': *w = *w - 20.2; break;
        default: {printf("Opcao Desconhecida\n");
                  *w = *w;}
    }
}

int main()
{
    float v1, v2, v3, valor, valorSoma, valorCalculo, *soma=0;
    char opcao, op, loop;

do{
    printf("================================================================\n");
    printf("         ------- >>>>>>>> Calculator <<<<<<<< -------\n");
    printf("================================================================\n");
    printf("Escolha o que voce deseja executar:\n\n");
    printf("-> Somar o dobro de dois numeros:                      TYPE [S]\n");
    printf("-> Somar o logaritmo de um numero com o mesmo ao cubo: TYPE [L]\n");
    printf("-> Somar ou subtrair um OFFSET:                        TYPE [O]\n");
    printf("\n>> ");
    scanf("%c", &opcao);
    getchar();
    opcao = toupper(opcao);

    switch(opcao)
    {
        case 'S': {
                    printf("\nDigite o primeiro valor:\n");
                    printf(">> ");
                    scanf("%f", &v1);
                    printf("\nDigite o segundo valor:\n");
                    printf(">> ");
                    scanf("%f", &v2);
                    soma_dobro_ref(&v1, &v2, &*soma);
                    printf("\n>> O valor dessa soma e: %d", *soma);
                    getchar();
                  } break;

        case 'L': {
                    printf("\nDigite um numero:\n");
                    printf(">> ");
                    scanf("%f", &v3);
                    valorCalculo = calculo(v3);
                    printf("\n>> O valor dessa soma e: %.2f", valorCalculo);

                  } break;

        case 'O': {
                    printf("\nDigite o valor desejado:\n");
                    printf(">> ");
                    scanf("%f", &valor);
                    getchar();
                    printf("\nEscolha uma opcao:\n");
                    printf("-> Somar 10,4:    TYPE [E]\n");
                    printf("-> Subtrair 20,2: TYPE [D]\n\n");
                    printf(">> ");
                    scanf("%c", &op);
                    op = toupper(op);
                    atualizar(&valor, op);
                    printf(">> O valor do numero informado atualizado e: %.2f", valor);
                    getchar();
                  } break;

        default: printf("\nERRO: Escolha Invalida\n");

    }
    printf("\n================================================================\n\n");
    printf("-> TYPE [R] para reiniciar o programa\n-> TYPE [Outra Tecla] para fechar o programa\n\n");
    printf(">> ");
    scanf("%c", &loop);
    loop = toupper(loop);
    system("cls");
}while(loop=='R');
    return 0;
}
