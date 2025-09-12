#include <stdio.h>


    int main(){
        //Dados da primera carta
        int carta = 1;
        char estado[2] = "CE";
        char cidade[50]= "Fortaleza";
        char codigo[20]= "f01";
        int Populacao= 2428708;
        float area = 313.8f;
        float pib = 73.000f;
        int Pontosturisticos = 50;
        float densidade = (float) 2428708 / 313.8f;
        double PIBpercapita = (float) 730000000 / 2428708;


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

        
        printf("densidade: %.2f \n", densidade);

        printf("PIB per capita: %.2f \n", PIBpercapita);

        printf("carta: %d - estado: %s - codigo: %s - cidade: %s \n",carta,estado,codigo,cidade);
        printf("Populacao: %d - area: %.3f km² - pib: %.3f bilhoes de reais: \n", Populacao,area,pib);
        printf("Ponto turistico %d - densidade: %.2f hab/km² - PIB per Capita: %.2f reais: \n", Pontosturisticos,densidade,PIBpercapita);

        //Dados da segunda carta
        int carta2 = 2;
        char estado2[8] = "AC";
        char cidade2[50]= "ACRE";
        char codigo2[10]= "A01";
        int Populacao2= 880631;
        float area2 = 152.581f;
        float pib2 = 23.000f;
        int Pontosturisticos2 =30;
        float densidade2 = (float) 880631 / 152.581f;
        double PIBpercapita2 = (float) 230000000 / 880631;

        //leitura da segunda carta
       
        printf("digite sua carta: \n");
        scanf("%d", &carta2);

        printf("digite seu estado: \n");
        scanf("%s", estado2);

        printf("digite sua cidade: \n");
        scanf("%s", cidade2);

        printf("digite o codigo da sua carta: \n");
        scanf("%s", codigo2);

        printf("Populacao:\n");
        scanf("%d", &Populacao2);

        printf("area:\n");
        scanf("%f", &area2);

        printf("pib:\n");
        scanf("%f", &pib2);

        printf("Pontos turisticos: \n");
        scanf("%d", &Pontosturisticos2);

        printf("densidade: %.2f \n", densidade2);

        printf("PIB per capita: %.2f \n", PIBpercapita2);

        printf("carta: %d - estado: %s - codigo: %s - cidade: %s \n",carta2,estado2,codigo2,cidade2);
        printf("Populacao: %d - area: %.3f km² - pib: %.3f bilhoes de reais: \n", Populacao2,area2,pib2);
        printf("Ponto turistico %d - densidade: %.2f hab/km² - PIB per Capita: %.2f reais: \n", Pontosturisticos2,densidade2,PIBpercapita2);


            return 0;

}