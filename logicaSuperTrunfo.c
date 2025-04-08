#include <stdio.h>


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
    int Atributo, Atributo2;
    int comp;


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


    printf("####ESCOLHA DE ATRIBUTOS PARA COMPARAÇÃO!!!!####\n");


    printf("ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO ENTRE AS CARTAS\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite o numero do atributo a ser comparado:");
    scanf("%d", &Atributo);


    //atributo 2 

    printf("ESCOLHA O SEGUNDO ATRIBUTO A SER COMPARADO ENTRE AS CARTAS\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite o numero do atributo a ser comparado:");
    scanf("%d", &Atributo2);
  
    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;
    
    // Definição dos valores para comparação
   
   if (Atributo == Atributo2)
   {
    printf("Opção ja selecionada");
   }else {
     switch (Atributo) 
    {
        case 1: valor1_carta1 = populacao; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = PIB; valor1_carta2 = PIB; break;
        case 4: valor1_carta1 = Pontos_Turisticos; valor1_carta2 = Pontos_Turisticos2; break;
        case 5: valor1_carta1 = DensidadePopulacional; valor1_carta2 = 1.0 / DensidadePopulacional2; break;
       
    }
    
    switch (Atributo2) {
        case 1: valor2_carta1 = populacao; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = PIB; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = Pontos_Turisticos; valor2_carta2 = Pontos_Turisticos2; break;
        case 5: valor2_carta1 = DensidadePopulacional; valor2_carta2 = DensidadePopulacional2; break;
        
    }}

    // Cálculo da soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;
    int resultadosoma;

    // Exibição do resultado
    if (Atributo == Atributo2)
    {
        return 0;
    }
    
    printf("\nComparação de cartas:\n");
    printf("CARTA1\n");
    printf("%s: %.2f e %.2f (Total: %.2f)\n", nome_da_cidade, valor1_carta1, valor2_carta1, soma1);
    printf("CARTA2\n");
    printf("%s: %.2f e %.2f (Total: %.2f)\n", nome_da_cidade2, valor1_carta2, valor2_carta2, soma2);
    
    resultadosoma = soma1 > soma2 ? 1 : 0;
    
    if (resultadosoma == 1)
    {
        printf("CARTA 1 VENCEU.");
    } else if (resultadosoma == 0)
    {
        printf("CARTA 2 VENCEU");
    } else
    {
        printf("O jogo empatou");
    }
    
    
    


    
     

    return 0;

}

