int main()
{
    int TOTAL=100, i;
    FILE *pont;
    pont = fopen("arquivo.txt", "wb");
    if (pont == NULL)
    { 
        printf("ERRO AO ABRIR PROGRAMA!");
        exit(1);
    }

    typedef struct {
        float potencia, corrente;
    } Valores;

    Valores medida[100];

    for (i=0;i<TOTAL;i++) {
        printf("Informe a potência %d\nInforme a corrente %d",i+1,i+1);
        scanf("%f %f",&medida[i].potencia, &medida[i].corrente);
    }

    fwrite(medida,sizeof(Valores),100,pont);
    fclose(pont);

    pont = fopen("arquivo.txt","rb");
    if(pont == NULL) {
        printf("ERRO AO ABRIR PROGRAMA");
        exit(1);
    }

    fread(medida,sizeof(Valores),100, pont);

    for (i = 0; i<TOTAL; i++) {
        printf("Potencia: %f \n Corrente %f",medida[i].potencia, medida[i].corrente);
    }
    GetKey();

    return 1;
}
