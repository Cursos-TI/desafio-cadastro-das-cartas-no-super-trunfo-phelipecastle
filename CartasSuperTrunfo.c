#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Dados da primeira Carta ----
    char firstState[5];
    char firstCity[50];  
    char firstCityCod[5];
    unsigned int firstPopulation;
    float firstArea;
    float firstPIB;
    int firstAttractionsNum;
    float firstPopulationDensity;
    float firstPIBCapita;
    float firstSuperPower;

    //Dados da segunda Carta ----
    char secondState[5];
    char secondCity[50];
    char secondCityCod[5];
    unsigned int secondPopulation;
    float secondArea;
    float secondPIB;
    int secondAttractionsNum;
    float secondPopulationDensity;
    float secondPIBCapita;
    float secondSuperPower;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Preencha abaixo os dados da primeira carta, conforme solicitado.\n");

    printf("Estado: ");
    scanf("%s", firstState);
    getchar();


    printf("Cidade: ");
    fgets(firstCity, sizeof(firstCity), stdin);
    firstCity[strcspn(firstCity, "\n")] = '\0';
    

    printf("Código da cidade: ");
    scanf("%s", firstCityCod);
    getchar();

    printf("População: ");
    scanf("%u", &firstPopulation);
    getchar(); // limpa o \n do buffer
    
    printf("Área em M²: ");
    scanf("%f", &firstArea);
    getchar();

    printf("PIB: ");
    scanf("%f", &firstPIB);
    getchar();

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &firstAttractionsNum);
    getchar();

    firstPopulationDensity = firstPopulation / firstArea;
    firstPIBCapita = firstPIB / firstPopulation;

    firstSuperPower = firstPopulation + firstArea + firstPIB + firstPIBCapita + firstPopulationDensity + firstAttractionsNum;

    //ISERÇÃO DOS DADOS DA SEGUNDA CARTA ----
    printf("Agora preescreva os dados da segunda carta...\n");

    printf("Estado: ");
    scanf("%s", secondState);
    getchar();

    printf("Cidade: ");
    fgets(secondCity, sizeof(secondCity), stdin);
    secondCity[strcspn(secondCity, "\n")] = '\0';
    
    printf("Código da cidade: ");
    scanf("%s", secondCityCod);
    getchar();

    printf("População: ");
    scanf("%u", &secondPopulation);
    getchar();

    printf("Área em M²: ");
    scanf("%f", &secondArea);
    getchar();

    printf("PIB: ");
    scanf("%f", &secondPIB);
    getchar();

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &secondAttractionsNum);
    getchar();

    secondPopulationDensity = secondPopulation / secondArea;
    secondPIBCapita = secondPIB / secondPopulation;

    secondSuperPower = secondPopulation + secondArea + secondPIB + secondPIBCapita + secondPopulationDensity + secondAttractionsNum; 



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   /*  printf("\n==============================\n");
    printf("Os dados da primeira carta são:\n");
    printf("- Estado: %s\n- Cidade: %s\n- Código da cid.: %s\n- População: %ul de habitantes\n- Área em M²: %.2f M²\n- PIB: %.2f B\n- Quantiade de pontos turísticos: %d\n- Densidade populacional: %.2f hab/km²\n- PIB per capita: %.2f reais\n- Super poder: %.2f", firstState, firstCity, firstCityCod, firstPopulation, firstArea, firstPIB, firstTouristAttractionsNum, firstPopulationDensity, firstPIBCapita, firstSuperPower);
    
    printf("\n==============================\n");
    printf("Os dados da segunda carta são:\n ");
    printf("- Estado: %s\n- Cidade: %s\n- Código da cid.: %s\n- População: %ul de habitantes\n- Área em M²: %.2f M²\n- PIB: %.2f B\n- Quantiade de pontos turísticos: %d\n- Densidade populacional: %.2f hab/km²\n- PIB per capita: %.2f reais\n", secondState, secondCity, secondCityCod, secondPopulation, secondArea, secondPIB, secondTouristAttractionsNum, secondPopulationDensity, secondPIBCapita);
     */
    //Comparação dos atributos das cartas
    printf("\n==============================\n");
    printf("Comparação de atributo;\n");

    //Escolha do atributo a ser comparado.
    int option;
    printf("Escolha um atributo para comparar entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. N° de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("\n ---------------------------------\n");
    printf("Escolher: ");
    scanf("%d", &option);
    
    // Estrutura lógica para comparar o atributo escolhido.
    printf("Estado: %s - %s\n", firstCity, secondCity);

    switch (option)
    {
    case 1:
        printf("População: %u - %u\n", firstPopulation, secondPopulation);
        break;
    case 2:
        printf("Área: %2.f - %2.f\n", firstArea, secondArea);
        break;
    case 3:
        printf("PIB: %2.f - %2.f\n", firstPIB, secondPIB);
        break;
    case 4:
        printf("Pontos turísticos: %d - %d\n", firstAttractionsNum, secondAttractionsNum);
        break;
    case 5:
        printf("Densidade Populacional: %2.f - %2.f\n", firstPopulationDensity, secondPopulationDensity);
        break;
    default:
        printf("Entrada inválida!");
        break;
    }

    printf("---------------------------------------\n");

    if(firstPopulation > secondPopulation ||
       firstArea > secondArea ||
       firstPIB > secondPIB ||
       firstAttractionsNum > secondAttractionsNum ||
       firstPopulationDensity < secondPopulationDensity) {
        printf("###  Carta 1 venceu!  ###");

    } else if(firstPopulation < secondPopulation ||
              firstArea < secondArea ||
              firstPIB < secondPIB ||
              firstAttractionsNum < secondAttractionsNum ||
              firstPopulationDensity > secondPopulationDensity) {
                printf("###  Carta 2 venceu!  ###");

            } else {
                printf("***  O atributo de ambas as cartas possuem o mesmo valor  ***");

            }
    
    return 0;
}
