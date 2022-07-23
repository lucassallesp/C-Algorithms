#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int main()
{
    FILE *pont_arq, *pont_arq2;
    int x, i, j, aux=0, agg_max, med_max;
    float aux2;

    pont_arq = fopen("instancias.txt", "w");

    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit -1;
    }

    else
    {
        srand((unsigned)time(NULL));                  //reseta a funçãoo rand alterando o valor da semente.
        agg_max = 1 + rand()%10;                      // define o numero de agregadores aleatoriamente dentro de um range escolhido.
                                                      // Soma-se 1 para coloca-lo como valor minimo possivel.
        int aggPos[agg_max][2],aggCost[agg_max];
        float aggFat[agg_max];

        for(i=0; i<agg_max; i++){                      //Irá preencher o array com as posições. j=0 é a posição em X, j=1 é a posição em Y.
            x = rand()%6;                             //ira gerar numeros inteiros aleatorios de 0 a 5.
            aggCost[i] = (2000*x) + 30000;            //preenche o vetor com o custo do agregador respectivo ao indice, aleatoriamente.

            do{
                aux = 10 + rand()%4;
            }while(aux == 11);

            aux2 = (float)aux / 10;
            aggFat[i] = aux2;


            for(j=0; j<=1; j++){
                aggPos[i][j] = rand()%10;             //posição aleatoria do agregador em metros dentro de um range escolhido.
            }
        }


        for(i=0; i<agg_max; i++){
            fprintf(pont_arq, "%d\t", i+1);         //\nAgregador
            fprintf(pont_arq, "%d\t", aggCost[i]);  //>> Custo de Aquisição:
            fprintf(pont_arq, "%.2f\t", aggFat[i]); //>> Fator de Interferencia:
            fprintf(pont_arq, "%d\t", aggPos[i][0]); //>> Posicao em X:
            fprintf(pont_arq, "%d\t", aggPos[i][1]); //>> Posicao em Y:
            fprintf(pont_arq, "\n");
        }

        fclose(pont_arq);
    }

    pont_arq2 = fopen("medidores.txt", "w");

    if(pont_arq2 == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit -1;
    }

    else
    {
        srand((unsigned)time(NULL));                  //reseta a funçãoo rand alterando o valor da semente.
        med_max = 1 + rand()%10;                      // define o numero de agregadores aleatoriamente dentro de um range escolhido.
                                                      // Soma-se 1 para coloca-lo como valor minimo possivel.
        int medPos[med_max][2];

        for(i=0; i<med_max; i++){                      //Irá preencher o array com as posições. j=0 é a posição em X, j=1 é a posição em Y.
            for(j=0; j<=1; j++){
                medPos[i][j] = rand()%10;             //posição aleatoria do agregador em metros dentro de um range escolhido.
            }
        }

        fprintf(pont_arq2, "===========================================\n");
        fprintf(pont_arq2, "           INSTANCIA CRIADA\n");
        fprintf(pont_arq2, "===========================================");
        fprintf(pont_arq2, "\n--> Numero de Medidores Gerado:       %d\n", med_max);

        for(i=0; i<med_max; i++){
            fprintf(pont_arq2, "\nMedidor %d\n", i+1);
            fprintf(pont_arq2, ">> Posicao em X:                      %d\n", medPos[i][0]);
            fprintf(pont_arq2, ">> Posicao em Y:                      %d\n\n", medPos[i][1]);
        }

        fclose(pont_arq2);
    }

    printf("Dados gravados com sucesso!");
    getchar();

    return 0;
}
