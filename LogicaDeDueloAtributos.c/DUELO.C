#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    
    char     carta1,     carta2;
    char    atributo1,  atributo2;             //CARTA ESCOLHIDA POR CADA JOGADOR
    int    populacao1,  populacao2;          //POPULAÇÃO DOS ESTADOS
    float   area_KM1,   area_KM2;         //EXTENSÃO TERRITORIAL
    float   pib1,       pib2;           //PIB ESTADUAL
    int     pontosTuristicos1 = 230, pontosTuristicos2 = 190;
    float pibPerCapita1, pibPerCapita2;



        srand(time(0));
        populacao1  =   21393441;
        populacao2  =   3658813; 
    

        
        area_KM1    =   586528.0;
        area_KM2    =   903357.0; 



        pib1    =   971978000000.0;
        pib2    =   273000000000.00;


        pibPerCapita1 = pib1 / populacao1; pibPerCapita2 = pib2 / populacao2;



        
        printf("### BEM-VINDO AO DUELOS DE CARTAS ###\n");
        printf("ESCOLHA O PRIMEIRO ATRIBUTO DE COMPARAÇÃO \n");
        printf("D. DENSIDADE\n");
        printf("A. AREA_km²\n");
        printf("P. VALOR BRUTO\n");
        printf("C. PIB PER CAPITA\n");
        printf("T. PONTOS TURÍSTICOS\n");
            scanf(" %c", &atributo1);


    switch (atributo1)
    {
            case 'D': 
            case 'd': printf("ESCOLHIDO DENSIDADE\n");
                    carta1 = populacao1 > populacao2 ? 1    :   0;
                break;

            case 'A': 
            case 'a': printf("ESCOLHIDO AREA_km²\n");
                    carta1 = area_KM1 > area_KM2 ? 1    :   0;
                break;

            case 'P': 
            case 'p': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta1 = pib1 > pib2 ? 1    :   0;
                break;

            case 'C': 
            case 'c': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta1 = pontosTuristicos1 > pontosTuristicos2 ? 1    :   0;
                break;

            case 'T': 
            case 't': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta1 = pibPerCapita1 > pibPerCapita2 ? 1    :   0;
                break;
    }    
    
    
    
    
        
        printf("ESCOLHA O SEGUNDO ATRIBUTO DE COMPARAÇÃO \n");
        printf("D. DENSIDADE\n");
        printf("A. AREA_km²\n");
        printf("P. VALOR BRUTO\n");
        printf("C. PIB PER CAPITA\n");
        printf("T. PONTOS TURÍSTICOS\n");
            scanf(" %c", &atributo2);


    if (atributo1 == atributo2)
        { printf("SELECIONADO O MESMO ATRIBUTO\n");

    }else{ 
        
    switch (atributo2)
    {
            case 'D': 
            case 'd': printf("ESCOLHIDO DENSIDADE\n");
                    carta2 = populacao1 > populacao2 ? 1    :   0;
                break;

            case 'A': 
            case 'a': printf("ESCOLHIDO AREA_km²\n");
                    carta2 = area_KM1 > area_KM2 ? 1    :   0;
                break;

            case 'P': 
            case 'p': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta2 = pib1 > pib2 ? 1    :   0;
                break;

            case 'C': 
            case 'c': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta2 = pontosTuristicos1 > pontosTuristicos2 ? 1    :   0;
                break;
            
            case 'T': 
            case 't': printf("ESCOLHIDO VALOR BRUTO\n");
                    carta2 = pibPerCapita1 > pibPerCapita2 ? 1    :   0;
                break;
    
    
    
            }
    }
    

    if (atributo1 && atributo2)
    {
        printf("PARABENS VOCÊ VENCEU!!!\n");
    }else 
        if (atributo1 != atributo2)    
    {   printf("EMPATOU!!!\n");
        
    }else{(printf("VOCÊ PERDEU!!!\n"));
    }
    

    


}
    
    
    
    
    
    
    
    
    
    
    

    













