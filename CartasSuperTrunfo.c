#include <stdio.h>

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
    unsigned long int firstPopulation;
    float firstArea;
    float firstPIB;
    int firstTouristAttractionsNum;
    float firstPopulationDensity;
    float firstPIBCapita;
    float firstSuperPower;

    //Dados da segunda Carta ----
    char secondState[5];
    char secondCity[50];
    char secondCityCod[5];
    unsigned long int secondPopulation;
    float secondArea;
    float secondPIB;
    int secondTouristAttractionsNum;
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
    scanf("%d", &firstTouristAttractionsNum);
    getchar();

    firstPopulationDensity = firstPopulation / firstArea;
    firstPIBCapita = firstPIB / firstPopulation;

    firstSuperPower = firstPopulation + firstArea + firstPIB + firstPIBCapita + firstPopulationDensity + firstTouristAttractionsNum;

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
    scanf("%d", &secondTouristAttractionsNum);
    getchar();

    secondPopulationDensity = secondPopulation / secondArea;
    secondPIBCapita = secondPIB / secondPopulation;

    secondSuperPower = secondPopulation + secondArea + secondPIB + secondPIBCapita + secondPopulationDensity + secondTouristAttractionsNum; 



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n==============================\n");
    printf("Os dados da primeira carta são:\n");
    printf("- Estado: %s\n- Cidade: %s\n- Código da cid.: %s\n- População: %ul de habitantes\n- Área em M²: %.2f M²\n- PIB: %.2f B\n- Quantiade de pontos turísticos: %d\n- Densidade populacional: %.2f hab/km²\n- PIB per capita: %.2f reais\n- Super poder: %.2f", firstState, firstCity, firstCityCod, firstPopulation, firstArea, firstPIB, firstTouristAttractionsNum, firstPopulationDensity, firstPIBCapita, firstSuperPower);
    
    printf("\n==============================\n");
    printf("Os dados da segunda carta são:\n ");
    printf("- Estado: %s\n- Cidade: %s\n- Código da cid.: %s\n- População: %ul de habitantes\n- Área em M²: %.2f M²\n- PIB: %.2f B\n- Quantiade de pontos turísticos: %d\n- Densidade populacional: %.2f hab/km²\n- PIB per capita: %.2f reais\n", secondState, secondCity, secondCityCod, secondPopulation, secondArea, secondPIB, secondTouristAttractionsNum, secondPopulationDensity, secondPIBCapita);
    
    //Comparação dos atributos das cartas
    printf("\n==============================\n");
    int comparePopulation = firstPopulation > secondPopulation;
    int compareArea = firstArea > secondArea;
    int comparePIB = firstPIB > secondPIB;
    int compareAttractions = firstTouristAttractionsNum > secondTouristAttractionsNum;
    int compareDensityP = firstPopulationDensity < secondPopulationDensity;
    int comparePIBCapita = firstPIBCapita > secondPIBCapita;
    int compareSuperPower = firstSuperPower > secondSuperPower;

    printf("Comparação de atributo;\n");

    //Exibição do atributo escolhido de cada cidade.
    printf("Carta 1 - %s (%s): %2.f\n", firstCity, firstState, firstPIB);
    printf("Carta 2 - %s (%s): %2.f\n", secondCity, secondState, secondPIB);


    // Estrutura de decisão de acordo com o atributo escolhido
    if(comparePIB) {
        // verifica se o valor 1 é maior que o valor 2
        // Se o retorno for 1 é exibido a primeira parte
        printf("\nCarta 1 (%s) venceu!\n", firstCity);
    } else {
        // Senão exibe o segundo argumento.
        printf("Carta 2 (%s) venceu!\n", secondCity);
    }

    
    return 0;
}
