#include <stdio.h>
#include <stdlib.h>


int main(){

    char estado[40], estado2[40];
    char codigo[40], codigo2[40];
    char nome_da_cidade[40], nome_da_cidade2[40];
    unsigned long int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int Pontos_Turisticos, Pontos_Turisticos2;
    float DensidadePopulacional, DensidadePopulacional2;
    float PIBpercapita, PIBpercapita2;
    float superpoder, superpoder2;
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePopulacional;
    int resultadoPIBperCapita;
    int resultadoSuperPoder;
    int Atributo;

    printf("DESAFIO SUPER TRUNFO \n");

    
    
    //entrada de dados  carta 1


    printf("CARTA 1 \n");
    
    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos);

   

    //calculos carta 1 

    DensidadePopulacional = populacao / area;


    PIBpercapita = (PIB*1000000000) / populacao;

    superpoder = (float) populacao + area + PIB + (float) Pontos_Turisticos + PIBpercapita + (1 / DensidadePopulacional);





    //entrada de dados carta 2 

    printf("CARTA 2 \n");
    
    printf("Digite o estado: ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos2);



    //calculos carta 2 
    
    DensidadePopulacional2 = populacao2 / area2;


    PIBpercapita2 = (PIB2*1000000000) / populacao2;

    superpoder2 = (float) populacao2 + area2 + PIB2 + (float) Pontos_Turisticos2 + PIBpercapita2 + (1 / DensidadePopulacional2);
    

    //exibição dos resultados da carta 1

    printf("CARTA 1 \n");
    
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("Populacao: %lu\n", populacao);
    printf("area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turisticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional);
    printf("PIB per capita:%.2f\n", PIBpercapita);
    printf("Super Poder:%.2f\n", superpoder);


    // exibiçao de dados carta 2 


    printf("CARTA 2\n");


    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional2);
    printf("PIB per capita:%.2f\n", PIBpercapita2);
    printf("Super Poder:%.2f\n", superpoder2);


    // comparaçoes dos atributos 

    printf("ESCOLHA O ATRIBUTO A SER COMPARADO ENTRE AS CARTAS\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    scanf("%d", &Atributo);

    switch (Atributo)
    {
    case 1:
    printf("População\n");
    if (populacao > populacao2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Populacao1: %lu\n", populacao);
        printf("Populacao2: %lu\n", populacao2);
        printf("CARTA 1 GANHOU!\n");
    } else if (populacao < populacao2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Populacao1: %lu\n", populacao);
        printf("Populacao2: %lu\n", populacao2);
        printf("CARTA 2 GANHOU!\n");
    } else
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Populacao1: %lu\n", populacao);
        printf("Populacao2: %lu\n", populacao2);
        printf("O JOGO EMPATOU");
    }
    break;
    case 2:
    printf("Área\n");
    if (area > area2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Área1: %.2f\n", populacao);
        printf("Área2: %.2f\n", populacao2);
        printf("CARTA 1 GANHOU!\n");
    } else if (area < area2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Área1: %.2f\n", populacao);
        printf("Área2: %.2f\n", populacao2);
        printf("CARTA 2 GANHOU!\n");
    } else
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Área1: %.2f\n", populacao);
        printf("Área2: %.2f\n", populacao2);
        printf("O JOGO EMPATOU\n");
    }
    break;
    case 3:
    printf("PIB\n");
    if (PIB > PIB2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("PIB1: %.2f\n", PIB);
        printf("PIB2: %.2f\n", PIB2);
        printf("CARTA 1 GANHOU!\n");
    } else if (PIB < PIB2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("PIB1: %.2f\n", PIB);
        printf("PIB2: %.2f\n", PIB2);
        printf("CARTA 2 GANHOU!\n");
    } else
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("PIB1: %.2f\n", PIB);
        printf("PIB2: %.2f\n", PIB2);
        printf("O JOGO EMPATOU!\n");
    }
    break;
    case 4:
    printf("Numero de pontos turisticos\n");
    if (Pontos_Turisticos > Pontos_Turisticos2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Numero de pontos turisticos1: %d\n", Pontos_Turisticos);
        printf("Numero de pontos turisticos2: %d\n", Pontos_Turisticos2);
        printf("CARTA 1 GANHOU!\n");
    } else if (Pontos_Turisticos < Pontos_Turisticos2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Numero de pontos turisticos1: %d\n", Pontos_Turisticos);
        printf("Numero de pontos turisticos2: %d\n", Pontos_Turisticos2);
        printf("CARTA 2 GANHOU!\n");
    } else
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Numero de pontos turisticos1: %d\n", Pontos_Turisticos);
        printf("Numero de pontos turisticos2: %d\n", Pontos_Turisticos2);
        printf("O JOGO EMPATOU!\n");
    }
    break;
    case 5:
    printf("Densidade populacional\n");
    if (DensidadePopulacional < DensidadePopulacional2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Densidade Populacional1: %.2f\n", DensidadePopulacional);
        printf("Densidade Populacional2: %.2f\n", DensidadePopulacional2);
        printf("CARTA 1 GANHOU!\n");
    } else if (DensidadePopulacional > DensidadePopulacional2)
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Densidade Populacional1: %.2f\n", DensidadePopulacional);
        printf("Densidade Populacional2: %.2f\n", DensidadePopulacional2);
        printf("CARTA 2 GANHOU!\n");
    } else
    {
        printf("Nome da cidade1: %s\n", nome_da_cidade);
        printf("Nome da cidade2: %s\n", nome_da_cidade2);
        printf("Densidade Populacional1: %.2f\n", DensidadePopulacional);
        printf("Densidade Populacional2: %.2f\n", DensidadePopulacional2);
        printf("O JOGO EMPATOU!\n");
    }
    break;
    default:
    printf("Opção invalida\n");
    break;
    }


    return 0;

}