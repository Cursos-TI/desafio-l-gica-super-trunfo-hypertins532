#include <stdio.h>

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

      /* 
    BEM-VINDO AO JOGO DE CARTAS DOS ESTADOS E CIDADES!

    Este é um jogo básico e simples de aprender. A seguir, serão apresentadas instruções para cada etapa:

    1ª ETAPA — NOME DO JOGADOR:
        Ao iniciar, será solicitado o nome do 1º jogador. Após informar, pressione ENTER para avançar.

    2ª ETAPA — CÓDIGO DA CARTA:
        Informe a abreviação do estado seguida de "01" para o jogador 1 ou "02" para o jogador 2.
        Exemplo: MINAS GERAIS → MG01 (jogador 1), MG02 (jogador 2)

    3ª ETAPA — ESTADO:
        Digite o nome do estado conforme o código informado na etapa anterior.
        Para estados compostos (com substantivo e adjetivo), utilize o subtraço "_" para separar as palavras.
        Exemplo: RIO_DE_JANEIRO

    4ª ETAPA — CIDADE:
        Escolha qualquer cidade dentro do território estadual selecionado.
        Para cidades compostas, também utilize o subtraço "_" entre as palavras.
        Exemplo: BELO_HORIZONTE

    5ª A 9ª ETAPA — VALORES ALEATÓRIOS:
        Serão solicitados dados como população, área, PIB per capita e pontos turísticos.
        Esses valores são livres e servem apenas para diversão!

    FINALIZAÇÃO:
        Após o preenchimento completo por ambos os jogadores, será calculada a pontuação individual.
        O jogador com maior pontuação será declarado vencedor.
        Em caso de não haver vencedor, será declarado empate,, pois não houve pontuação superior.
                            DIVIRTA-SE
    */
    



    // VARIAVEIS, será usadas char, int e float
    char    player¹[30],    player²[30];
    char    carta¹[30],     carta²[30];
    char    estado¹[50],    estado²[50];
    char    cidade¹[30],    cidade²[30];
    int    população¹, população²;
    float   area_KM¹,   area_KM²;
    float   pib¹,       pib²;
    int    PT_Turisticos¹,  PT_turisticos²;
    int     Pontos¹ = 0,    Pontos² = 0;
    



    //JOGADOR N°1
    printf("NOME DO 1° JOGADOR\n");
        scanf("%s", player¹);
    printf("Código DA CARTA\n");
        scanf("%s",carta¹);
    printf("QUAL O ESTADO?\n");
        scanf("%s",estado¹);
    printf("CIDADE?\n");
        scanf("%s",cidade¹);
    printf("N° DE POPULAÇÃO\n");
        scanf("%d",&população¹);
    printf("QUANTO KM² DE EXTENSÃO DO ESTADO?\n");
        scanf("%f",&area_KM¹);
    printf("QUAL O PIB?\n");
        scanf("%f",&pib¹);
    printf("TOTAL DE PONTOS TURISTICOS?\n");
        scanf("%d",&PT_Turisticos¹);
    

    //JOGADORA N°2
    printf("NOME DO 2° JOGADOR\n");
        scanf("%s", player²);
    printf("Código DA CARTA\n");
        scanf("%s",carta²);
    printf("QUAL O ESTADO?\n");
        scanf("%s",estado²);
    printf("CIDADE?\n");
        scanf("%s",cidade²);
    printf("N° DE POPULAÇÃO\n");
        scanf("%d",&população²);
    printf("QUANTO KM² DE EXTENSÃO DO ESTADO?\n");
        scanf("%f",&area_KM²);
    printf("QUAL O PIB?\n");
        scanf("%f",&pib²);
    printf("TOTAL DE PONTOS TURISTICOS?\n");
        scanf("%d",&PT_turisticos²);

    //FOI INTRODUZIDO A VARIAÇÃO FLOAT PARA QUE A DIVISÃO DE DENSIDADE E PIB PER CAPITA FOSSEM POSSIVEIS.
    float densidade¹, densidade²;
    float pib_p_c¹, pib_p_c²;
    
    //DENSIDADE
    densidade¹ = população¹ / area_KM¹;
    densidade² = população² / area_KM²;

    //PIB PER CAPITA
    pib_p_c¹ = pib¹ / população¹;
    pib_p_c² = pib² / população²;   



    //INFORMAÇÕES RESUMIDAS
    
    //JOGADOR 1°
    printf("%s\n", player¹);
    printf("CÓDIGO: %s\n", carta¹);
    printf("ESTADO: %s\n", estado¹);
    printf("NOME DA CIDADE: %s\n", cidade¹);
    printf("POPULAÇÃO: %d\n", população¹);
    printf("ÁREA (EM KM²): %.2f KM²\n", area_KM¹);
    printf("PIB: %.2f REAIS\n", pib¹);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", PT_Turisticos¹);
    printf("DENSIDADE POPULACIONAL: %.2f Hab'Km²\n",  densidade¹);
    printf("PIB PER CAPITA: %.2f reais\n",    pib_p_c¹);



    //JOGADOR 2°
    printf("%s\n", player²);
    printf("CÓDIGO: %s\n", carta²);
    printf("ESTADO: %s\n", estado²);
    printf("NOME DA CIDADE: %s\n", cidade²);
    printf("POPULAÇÃO: %i\n", população²);
    printf("ÁREA (EM KM²): %.2f KM²\n", area_KM²);
    printf("PIB: %.2f REAIS\n", pib²);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", PT_turisticos²);
    printf("DENSIDADE POPULACIONAL: %.2f Hab'Km²\n",  densidade²);
    printf("PIB PER CAPITA: %.2f reais\n",    pib_p_c¹);


    


    // Nesta parte será utilizada a estrutura IF e ELSE, realizando a comparação dos valores de cada carta. Os atributos considerados serão: Quantidade de população, Área em km², PIB per capita, Pontos turísticos.

  
if (população¹ > população²)
{Pontos¹++;}
    else{if(população¹ < população²)    
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


// RESULTADO FINAL: Nesta etapa será exibida a pontuação de cada jogador, e identificado o vencedor ou o empate. Utilizando, printf, if e else

    printf("RESULTADO FINAL!\n");
    printf("%s: PONTOS %d\n", player¹,  Pontos¹);
    printf("%s: PONTOS %d\n", player²,  Pontos²);


if (Pontos¹ > Pontos²)
    {printf("VENCEDOR: %s\n", player¹);}
    else if (Pontos¹ < Pontos²)
    {printf("VENCEDOR: %s\n", player²);}
    else{printf("EMPATE!\n");}
    
    return 0;
}
