#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *pont_arq;
    char text[101], read[101];

    pont_arq = fopen("notepad.txt", "a"); // "a" Permissão para abrir um arquivo texto para escrita(gravação), permite acrescentar novos dados ao final do arquivo. Caso não exista, ele será criado. 
    
    if(pont_arq == NULL)
    {
        printf("ERRO! O arquivo nao foi aberto!\n");
        getch();
        return 1;
    }

    else
    {
        printf("===========================================\n");
        printf("     O arquivo foi aberto com sucesso!\n");
        printf("===========================================\n");
        printf("Digite algo para inserir no notepad.txt:\n");
        printf(">> ");
        gets(text);
        fprintf(pont_arq, "%s\n", text);
    }
    
    fclose(pont_arq);
    printf("\nDados gravados com sucesso!\n");
    printf("===========================================\n\n");
    printf("Leitura de dados inseridos no notepad.txt:\n");
    
    //abrindo arquivo para leitura
    pont_arq = fopen("notepad.txt", "r");

    while(fgets(read, 101, pont_arq) != NULL)
    {
        printf(">> %s", read);
    }

    fclose(pont_arq);
    getch();

    return 0;
}