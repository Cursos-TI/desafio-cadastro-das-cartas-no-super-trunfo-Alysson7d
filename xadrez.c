#include <stdio.h>


    int main(){
        //Dados da primera carta
        int carta = 1 - 2;
        char estado[8] = "CE - AC";
        char codigo[10]= "f01 - A01";
        char cidade[50]= "Fortaleza - Riobranco";
        int Populacao= 2428708 - 880631;
        float area = 313.8f - 152.581f;
        float pib = 73.000f - 23.000f;
        int Pontosturisticos = 50 - 30;

        //leitura da primeira carta
       
        printf("digite sua carta: \n");
        scanf("%d", &carta);

        printf("digite seu estado: \n");
        scanf("%s", estado);

        printf("digite sua cidade: \n");
        scanf("%s", cidade);

        printf("digite o codigo da sua carta: \n");
        scanf("%s", codigo);

        printf("Populacao:\n");
        scanf("%d", &Populacao);

        printf("area:\n");
        scanf("%f", &area);

        printf("pib:\n");
        scanf("%f", &pib);

        printf("Pontos turisticos: \n");
        scanf("%d", &Pontosturisticos);

        printf("carta: %d - estado: %s - codigo: %s - cidade: %s \n",carta,estado,codigo,cidade);
        printf("Populacao: %d - area: %.3f km² - pib: %.3f bilhoes de reais - Pontoturistico: %d \n", Populacao,area,pib,Pontosturisticos);

        //leitura da segunda carta
       
        printf("digite sua carta: \n");
        scanf("%d", &carta);

        printf("digite seu estado: \n");
        scanf("%s", estado);

        printf("digite sua cidade: \n");
        scanf("%s", cidade);

        printf("digite o codigo da sua carta: \n");
        scanf("%s", codigo);

        printf("Populacao:\n");
        scanf("%d", &Populacao);

        printf("area:\n");
        scanf("%f", &area);

        printf("pib:\n");
        scanf("%f", &pib);

        printf("Pontos turisticos: \n");
        scanf("%d", &Pontosturisticos);

        printf("carta: %d - estado: %s - codigo: %s - cidade: %s \n",carta,estado,codigo,cidade);
        printf("Populacao: %d - area: %.3f km² - pib: %.3f bilhoes de reais - Pontoturistico: %d \n", Populacao,area,pib,Pontosturisticos);

            return 0;

}