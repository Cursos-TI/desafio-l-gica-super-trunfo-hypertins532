#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    


    
    // Declaração das variáveis principais
    char    player¹[30],    player²[30];    //NOME DOS JOGADORES
    int     carta¹,     carta²;             //CARTA ESCOLHIDA POR CADA JOGADOR
    int     menuGame;                       //OÇÃO DO MENU
    int    populacao1, populacao2;          //POPULAÇÃO DOS ESTADOS
    float   area_KM¹,   area_KM²;           //EXTENSÃO TERRITORIAL
    float   pib¹,       pib²;               //PIB ESTADUAL
    int    PT_Turisticos¹,  PT_turisticos²; //PONTOS TURISTICOS
    int     Pontos¹ = 0,    Pontos² = 0;    //PONTUAÇÕES
    
    //MENU PRINCIPAL
    printf("****BEM VINDO AO JOGO DE CARTAS****\n");
    printf("1. PLAY!\n");
    printf("2. REGRAS!\n");
    printf("3. SAIR DO JOGO!\n");
    scanf("%d", &menuGame);

    // ESTRUTURA DE DECISÃO
    switch (menuGame)
    {
    case 1:
        printf("INCIANDO O JOGO...\n");
        break;
    case 2:
        printf("REGRA 1° INSERIR SEU NOME!\n");
        printf("REGRA 2° ESCOLHER A CARTA!\n");
        printf("REGRA 2° SELECIONA O ATRIBUTO PARA COMPARAÇÃO!\n");
        printf("REGRA 4° A MAIS IMPORTANTE DE TODAS!\n" "#######SE DIVIRTA######!\n");
        break;
    case 3:
        printf("EXIT...\n");
        break;
    }


    //JOGADOR N°1
    printf("NOME DO 1° JOGADOR\n");
        scanf("%s", &player¹);
    printf("***ESCOLHA A CARTA!***\n");
    printf("1.SP01\n");
    printf("2.RJ01\n");
    printf("3.MG01\n");
    printf("4.MT01\n");
        scanf("%d", &carta¹);

    switch (carta¹)
    {
    case 1:
        printf("***SELECIONOU A CARTA SP01***\n");
        printf("ESTADO DE SÃO PAULO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 46.081.801 habitantes\n");
        populacao1 = 46081801;
        printf("EXTENSÃO TERRITORIAL DE: 248.219 km²\n");
        area_KM¹ = 248219.0;
        printf("PIB: R$ 3.444.814.000.000 TRILHÕES\n");
        pib¹ = 3444814000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 124 PONTOS\n");
        PT_Turisticos¹ = 124;
        break;

    case 2:
        printf("***SELECIONOU A CARTA RJ01***\n");
        printf("ESTADO DE RIO DE JANEIRO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 17.223.547 habitantes\n");
        populacao1 = 17223547;
        printf("EXTENSÃO TERRITORIAL DE: 43.696 km²\n");
        area_KM¹ = 43696.0;
        printf("PIB: R$ 1.172.871.000.000 TRILHÕES\n");
        pib¹ = 1172871000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 190 PONTOS\n");
        PT_Turisticos¹ = 190;
        break;

    case 3:
        printf("***SELECIONOU A CARTA MG01***\n");
        printf("ESTADO DE MINAS GERAIS\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 21.393.441 habitantes\n");
        populacao1 = 21393441;
        printf("EXTENSÃO TERRITORIAL DE: 586.528 km²\n");
        area_KM¹ = 586528.0;
        printf("PIB: R$ 971.978.000.000 BILHÕES\n");
        pib¹ = 971978000000.0;
        printf("PONTOS TURISTICOS ESTIMATIVA: 230 PONTOS\n");
        PT_Turisticos¹ = 230;
        break;

    case 4:
        printf("***SELECIONOU A CARTA MT01***\n");
        printf("ESTADO DE MATO GROSSO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 3.658.813 habitantes\n");
        populacao1 = 3658813;
        printf("EXTENSÃO TERRITORIAL DE: 903.357 km²\n");
        area_KM¹ = 903357.0;
        printf("PIB: R$ 273.000.000.000 BILHÕES\n");
        pib¹ = 273000000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 231 PONTOS\n"); 
        PT_Turisticos¹ = 231;
        break;
    }  


    //JOGADOR N°2
    printf("NOME DO 2° JOGADOR\n");
        scanf("%s", &player²);
    printf("***ESCOLHA A CARTA!***\n");
    printf("1.SP01\n");
    printf("2.RJ01\n");
    printf("3.MG01\n");
    printf("4.MT01\n");
        scanf("%d", &carta²);

    switch (carta²)
    {
    case 1:
        printf("***SELECIONOU A CARTA SP01***\n");
        printf("ESTADO DE SÃO PAULO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 46.081.801 habitantes\n");
        populacao2 = 46081801;
        printf("EXTENSÃO TERRITORIAL DE: 248.219 km²\n");
        area_KM² = 248219.0;
        printf("PIB: R$ 3.444.814.000.000 TRILHÕES\n");
        pib² = 3444814000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 124 PONTOS\n");
        PT_turisticos² = 124;
        break;

    case 2:
        printf("***SELECIONOU A CARTA RJ01***\n");
        printf("ESTADO DE RIO DE JANEIRO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 17.223.547 habitantes\n");
        populacao2 = 17223547;
        printf("EXTENSÃO TERRITORIAL DE: 43.696 km²\n");
        area_KM² = 43696.0;
        printf("PIB: R$ 1.172.871.000.000 TRILHÕES\n");
        pib² = 1172871000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 190 PONTOS\n");
        PT_turisticos² = 190;
        break;

    case 3:
        printf("***SELECIONOU A CARTA MG01***\n");
        printf("ESTADO DE MINAS GERAIS\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 21.393.441 habitantes\n");
        populacao2 = 21393441;
        printf("EXTENSÃO TERRITORIAL DE: 586.528 km²\n");
        area_KM² = 586528.0;
        printf("PIB: R$ 971.978.000.000 BILHÕES\n");
        pib² = 971978000000.0;
        printf("PONTOS TURISTICOS ESTIMATIVA: 230 PONTOS\n");
        PT_turisticos² = 230;
        break;
    case 4:
        printf("***SELECIONOU A CARTA MT01***\n");
        printf("ESTADO DE MATO GROSSO\n");
        printf("#ATRIBUTOS#\n");
        printf("N° POPULACIONAL DE: 3.658.813 habitantes\n");
        populacao2 = 3658813;
        printf("EXTENSÃO TERRITORIAL DE: 903.357 km²\n");
        area_KM² = 903357.0;
        printf("PIB: R$ 273.000.000.000 BILHÕES\n");
        pib² = 273000000000.00;
        printf("PONTOS TURISTICOS ESTIMATIVA: 231 PONTOS\n");
        PT_turisticos² = 231;
        break;
    }  



    //ATRIBUTO PARA COMPARAÇÃO (X1)

        printf("*** BEM-VINDO A PARTE FINAL***\n");
        printf("***AQUI SERA SELECIONADO O ATRIBUTO PARA ANUNCIAR O VENCEDOR DO X1 NO ATRIBUTO***\n");
        printf("LEMBRANDO QUE SÓ GANHARÁ QUE TIVER MAIS FORÇA COM TODOS OS ATRIBUTOS OU PODERÁ GERAR UM EMPATE!\n");


        printf("**** SELECIONA O ATRIBUTO DE X1 ****\n");
        printf("1.POPULAÇÃO!\n");
        printf("2.EXTENSÃO TERRITORIAL!\n");
        printf("3.PIB!\n");
        printf("4.PONTOS TURISTICOS!\n");
            scanf("%d", &carta¹);

    // COMPARAÇÃO DE ATRIBUTOS ESCOLHIDOS
    switch (carta¹)
    {
    case 1:
        printf("***POPULAÇÃO***\n");
            if (populacao1 > populacao2)
                {printf("VENCEDOR É O PLAYER: %s\n", player¹);
            }else if (populacao1 < populacao2)
                {printf("VENCEDOR É O PLAYER: %s\n", player²);
            }
        break;
    
    case 2:
        printf("***EXTENSÃO TERRITORIAL***\n");
            if (area_KM¹ > area_KM²)
                {printf("VENCEDOR É O PLAYER: %s\n", player¹);
            }else if (area_KM¹ < area_KM²)
                {printf("VENCEDOR É O PLAYER: %s\n", player²);}
            
        break;

    case 3:
        printf("***EXTENSÃO TERRITORIAL***\n");
            if (pib¹ > pib²)
                {printf("VENCEDOR É O PLAYER: %s\n", player¹);
            }else if (pib¹ < pib²)
                {printf("VENCEDOR É O PLAYER: %s\n", player²);}
            
    
    case 4:
        printf("***EXTENSÃO TERRITORIAL***\n");
            if (PT_Turisticos¹ > PT_turisticos²)
                {printf("VENCEDOR É O PLAYER: %s\n", player¹);
            }else if (PT_Turisticos¹ < PT_turisticos²)
                {printf("VENCEDOR É O PLAYER: %s\n", player²);}
            break;
    }





    //FOI INTRODUZIDO A VARIAÇÃO FLOAT PARA QUE A DIVISÃO DE DENSIDADE E PIB PER CAPITA FOSSEM POSSIVEIS.
    float densidade¹, densidade²;
    float pib_p_c¹, pib_p_c²;


        //DENSIDADES
        densidade¹ = populacao1 / area_KM¹;
        densidade² = populacao2 / area_KM²;

        //PIB PER CAPITA
        pib_p_c¹ = pib¹ / populacao1;
        pib_p_c² = pib² / populacao2;   

    //VARIAVEL PARA QUE SEJA REALIZADA A SOMA DE ATRIBUTOS DE CADA INDIVIDUO 
    double superPoderA, superPoderB;

        superPoderA = populacao1 + area_KM¹ + pib¹ + PT_Turisticos¹ + pib_p_c¹;
        superPoderB = populacao2 + area_KM² + pib² + PT_turisticos² + pib_p_c²;
    
    
// Nesta parte será utilizada a estrutura IF e ELSE, realizando a comparação dos valores de cada carta. Os atributos considerados serão: Quantidade de população, Área em km², PIB per capita, Pontos turísticos.

  
    if (populacao1 > populacao2)
    {Pontos¹++;}
        else{if(populacao1 < populacao2)    
            Pontos²++;}

    if (area_KM¹ > area_KM²)
    {Pontos¹++;}
        else{if(area_KM¹ < area_KM²)
            Pontos²++;}

    if (pib¹ > pib²)
    {Pontos¹++;}
        else{if(pib¹ < pib²)
            Pontos²++;}

    if (PT_Turisticos¹ > PT_turisticos²)
    {Pontos¹++;}
        else{if(PT_Turisticos¹ < PT_turisticos²)
            Pontos²++;}

    if (superPoderA > superPoderB)
    {Pontos¹++;}
        else{if(superPoderA < superPoderB)
            Pontos²++;}
if (densidade¹ < densidade²)
    {Pontos¹++;}
        else{if(superPoderA > superPoderB)
            Pontos²++;}

        //UTILIZADO PARA DIFERENCIAR AS PONTUAÇÕES ENTRE OS PLAYERS!
        int resultadoA, resultadoB;
        resultadoA = superPoderA > superPoderB;
        resultadoB = superPoderA < superPoderB;


        printf("RESULTADO FINAL!\n");
        printf("%s: PONTOS %d\n", player¹,  Pontos¹);
        printf("%s: PONTOS %d\n", player²,  Pontos²);
        
        

        //IMPLEMENTADO PONTOS PARA QUE PODESSE MOSTRAR O PLAYER COM MAIORES ATRIBUTOS. // RESULTADO FINAL: Nesta etapa será exibida a pontuação de cada jogador, e identificado o vencedor ou o empate. Utilizando, printf, if e else
    if (Pontos¹ > Pontos²)
        {printf("VENCEDOR: %s\n", player¹);}
        else if (Pontos¹ < Pontos²)
        {printf("VENCEDOR: %s\n", player²);}
        else{printf("EMPATE!\n");}
        
        //O PRINT FOI USADO PARA DEMONSTRAR SE O RESULTADO DO PLAYERs SÃO VERDADEIRO OU FALSO DE CADA INDIVIDUO, AO COMPARATORIO DO SUPER PODER
        printf("O PODER DO(A) %s É MAIOR QUE O PODER DO(A) %s:  %d\n", player¹, player², (superPoderA > superPoderB));
        printf("O PODER DO(A) %s É MENOR QUE O PODER DO(A) %s:  %d\n", player¹, player², (superPoderA < superPoderB));

        //iF E ELSE PARA ANUNCIAR O PLAYER COM MAIS PODER, SENDO O RESULTADO VERDADEIRO DEMONSTRADO PELO O NÚMERO 1
    
    if ((densidade¹ > densidade²) && (densidade¹ < densidade²))
        {   printf("O VENCEDOR COM MENOR DENSIDADE: %s\n", player¹);}
        else{printf("O VENCEDOR COM MENOR DENSIDADE: %s\n", player²);}

    if (superPoderA > superPoderB)
        {printf("O JOGADOR VENCEDOR COM O MAIOR PODER: %s PW %.2f\n", player¹, superPoderA);}
        else{printf("O JOGADOR VENCEDOR COM O MAIOR PODER: %s PW %.2f\n", player², superPoderB);}

   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
