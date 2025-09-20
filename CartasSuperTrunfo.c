#include <stdio.h>
#include <string.h>
#include <math.h>

#define C1      1 // Carta 1 vence
#define EMP     0 // Empate
#define C2     -1 // Carta 2 vence

const double EPS = 1e-9;



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(void){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Dados da primeira  e segunda Carta ----
    char firstState[5], firstCity[50], firstCityCod[5], secondState[5], secondCity[50], secondCityCod[5];
    unsigned int firstPopulation, secondPopulation;
    float firstArea, secondArea;
    float firstPIB, secondPIB;
    int firstAttractionsNum, secondAttractionsNum;
    double firstPopulationDensity, secondPopulationDensity;
    double firstPIBCapita, secondPIBCapita;
    double firstSuperPower, secondSuperPower;
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

    int option1, option2;
    int flag1 = EMP, flag2 = EMP;
    double amount1 = 0.0, amount2 = 0.0;
   
    printf("Escolha um atributo para comparar entre as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. N° de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolher: ");
    scanf("%d", &option1);
    
    // Estrutura lógica para comparar o atributo escolhido.
    

    switch (option1)
    {
    case 1: // População; Maior é melhor
        if(firstPopulation == secondPopulation) flag1 = EMP; // Verifica se os valores são iguais
        else  flag1 = firstPopulation > secondPopulation ? C1 : C2; // Verifica qual valor é maior ou Menor
       // Recebem o valor para soma futura
        amount1 += (double)firstPopulation;
        amount2 += (double)secondPopulation;

        break;
    case 2: // Área; Maior é melhor
        if(fabs(firstArea - secondArea) < EPS) flag1 = EMP; // Verifica se os valores são iguais
        else flag1 = firstArea > secondArea ? C1 : C2; // Verifica qual valor é maior ou Menor
        // Recebem o valor para soma futura
        amount1 += firstArea;
        amount2 += secondArea;

        break;
    case 3: // PIB; Maior é melhor
        if(fabs(firstPIB - secondPIB) < EPS) flag1 = EMP; // Verifica se os valores são iguais
        else flag1 = firstPIB > secondPIB ? C1 : C2; // Verifica qual valor é maior ou Menor
        // Recebem o valor para soma futura
        amount1 += firstPIB;
        amount2 += secondPIB;

        break;
    case 4: //Pontos Turísticos; Maior é melhor
        if(firstAttractionsNum == secondAttractionsNum) flag1 = EMP; // Verifica se os valores são iguais
        else flag1 = firstAttractionsNum > secondAttractionsNum ? C1 : C2; // Verifica qual valor é maior ou Menor
        // Recebem o valor para soma futura
        amount1 += (double)firstAttractionsNum;
        amount2 += (double)secondAttractionsNum;

        break;
    case 5: // Densidade Populacional; Menor é melhor
        if(fabs(firstPopulationDensity - secondPopulationDensity) < EPS) flag1 = EMP; // Verifica se os valores são iguais
        else flag1 = firstPopulationDensity < secondPopulationDensity ? C1 : C2; // Verifica qual valor é maior ou Menor
        // Recebem o valor para soma futura
        amount1 += -firstPopulationDensity; //Inverso para não favorecer a carta com maior valor
        amount2 += -secondPopulationDensity; //Inverso para não favorecer a carta com maior valor

        break;
    default:
        printf("Entrada inválida!");
        break;
    }

    printf("\n==============================\n");
    printf("Escolha outro Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. N° de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    
    printf("Escolher: ");
    scanf("%d", &option2);

    printf("\n ---------------------------------\n");
    printf("Estado: %s - %s\n", firstCity, secondCity);
    if(option1 == 1) {
        printf("População: %u - %u\n", firstPopulation, secondPopulation);
    } else if (option1 == 2) {
        printf("Área: %.2f - %.2f\n", firstArea, secondArea);
    } else if(option1 == 3) {
        printf("PIB: %.2f - %.2f\n", firstPIB, secondPIB);
    } else if(option1 == 4) {
        printf("Pontos Turísticos: %d - %d\n", firstAttractionsNum, secondAttractionsNum);
    } else if (option1 == 5) {
        printf("Densidade Populacional: %.2f - %.2f\n", firstPopulationDensity, secondPopulationDensity);
    }

    if(option1 == option2) {
        printf("Atributo já selecionado!\n");
    } else {
        
        switch (option2) {
            case 1: // População; Maior é melhor
                printf("População: %u - %u\n", firstPopulation, secondPopulation);

                if(firstPopulation == secondPopulation) flag2 = EMP; // Verifica se os valores são iguais
                else flag2 = firstPopulation > secondPopulation ? C1 : C2; // Verifica qual valor é maior ou Menor
                // Soma dos valores dos atributos
                amount1 += (double)firstPopulation; 
                amount2 += (double)secondPopulation;
                printf("Soma dos atributos: %.2f - %.2f\n", amount1, amount2);

                break;
            case 2: // Área; Maior é melhor
                printf("Área: %.2f - %.2f\n", firstArea, secondArea);

                if(fabs(firstArea - secondArea) < EPS) flag2 = EMP; // Verifica se os valores são iguais
                else flag2 = firstArea > secondArea ? C1 : C2; // Verifica qual valor é maior ou Menor
                // Soma dos valores dos atributos
                amount1 += firstArea;
                amount2 += secondArea;
                printf("Soma dos atributos: %.2f - %.2f\n", amount1, amount2);

                break;
            case 3: // PIB; Maior é melhor
                printf("PIB: %.2f - %.2f\n", firstPIB, secondPIB);
                
                if(fabs(firstPIB - secondPIB) < EPS) flag2 = EMP; // Verifica se os valores são iguais
                else flag2 = firstPIB > secondPIB ? C1 : C2; // Verifica qual valor é maior ou Menor
                // Soma dos valores dos atributos
                amount1 += firstPIB;
                amount2 += secondPIB;
                printf("Soma dos atributos: %.2f - %.2f\n", amount1, amount2);

                break;
            case 4: // Pontos Turístico; Maior é melhor
                printf("Pontos turísticos: %d - %d\n", firstAttractionsNum, secondAttractionsNum);
                if(firstAttractionsNum == secondAttractionsNum) flag2 = EMP; // Verifica se os valores são iguais
                else flag2 = firstAttractionsNum > secondAttractionsNum ? C1 : C2; // Verifica qual valor é maior ou Menor
                // Soma dos valores dos atributos
                amount1 += (double)firstAttractionsNum;
                amount2 += (double)secondAttractionsNum;
                printf("Soma dos atributos: %.2f - %.2f\n", amount1, amount2);

                break;
            case 5: // Densidade; Menor é melhor
                printf("Densidade Populacional: %.2f - %.2f\n", firstPopulationDensity, secondPopulationDensity);
                if(fabs(firstPopulationDensity - secondPopulationDensity) < EPS) flag2 = EMP; // Verifica se os valores são iguais
                else flag2 = firstPopulationDensity < secondPopulationDensity ? C1 : C2; // Verifica qual valor é maior ou Menor
                // Soma dos valores dos atributos
                amount1 += -firstPopulationDensity; // Inverso para não favorecer o atributo com maior valor
                amount2 += -secondPopulationDensity; // Inverso para não favorecer o atributo com maior valor
                printf("Soma dos atributos: %.2f - %.2f\n", amount1, amount2);

                break;
            default:
                printf("Entrada Inválida!\n");
                break;
        }


    }

    printf("---------------------------------------\n");
    
    //Estrutura de decisão para comparar o resultado das comparações
    int score1 = (flag1 == C1) + (flag2 == C1);
    int score2 = (flag1 == C2) + (flag2 == C2);
    if (score1 == 2) {
        printf("\n###   Carta 1 venceu! ###\n");

    } else if (score2 == 2) {
        printf("\n### Carta 2 Venceu! ###\n");

    } else {
        if(fabs(amount1 - amount2) < EPS) {
            printf("\n*** EMPATE! ***\n");
        } else if(amount1 > amount2) {
            printf("\n###   Carta 1 venceu (Desempate pela soma)! ###\n");
        } else {
            printf("\n### Carta 2 Venceu (Desempate pela soma)! ###\n");
        }
    }

    return 0;
}