#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declaração das variáveis para as Cartas 1 e 2
    char estado1, estado2;                          // Armazena o Estado (A-H).
    char codigo1[3], codigo2[3];                    // Código: armazena dois dígitos, exemplo: "01"
    char cidade1[50], cidade2[50];                  // Armazena o nome da cidade
    int populacao1, populacao2;                     // Armazena a população da cidade
    float area1, area2;                             // Armazena a área da cidade em km²
    float pib1, pib2;                               // Armazena o PIB em bilhões de reais
    int qtdPontosTuristicos1, qtdPontosTuristicos2; // Armazena a quantidade de pontos turísticos da cidade
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro dos dados da Carta 1
    printf("Informe o Estado da Carta 1:\nObs.: Lembre-se que este país só possui 8 estados representados pelas letras A ao H: ");
    scanf(" %c", &estado1); // O espaço antes de %c é para ignorar qualquer caractere de nova linha que possa ter sido deixado no buffer

    printf("Informe o número da Carta 1 (ex: 01): ");
    scanf("%s", codigo1);
   
    printf("Informe o Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1); // Para capturar nomes com espaços, usamos " %[^\n]" para ler até a quebra de linha

    printf("Informe a População da Carta 1: ");
    scanf("%d", &populacao1);
    
    printf("Informe a Área (em km²) da Carta 1: ");
    scanf("%f", &area1);
    
    printf("Informe o PIB (em bilhões de reais) da Carta 1: ");
    scanf("%f", &pib1);
    
    printf("Informe o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &qtdPontosTuristicos1);

    // Cadastro dos dados da Carta 2
    printf("Informe o Estado da Carta 2:\nObs.: Lembre-se que este país só possui 8 estados representados pelas letras A ao H: ");
    scanf(" %c", &estado2); // O espaço antes de %c é para ignorar qualquer caractere de nova linha que possa ter sido deixado no buffer
    
    printf("Informe o número da Carta 2 (ex: 02): ");
    scanf("%s", codigo2);
    
    printf("Informe o Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2); // Para capturar nomes com espaços, usamos " %[^\n]" para ler até a quebra de linha
    
    printf("Informe a População da Carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Informe a Área (em km²) da Carta 2: ");
    scanf("%f", &area2);
    
    printf("Informe o PIB (em bilhões de reais) da Carta 2: ");
    scanf("%f", &pib2);
    
    printf("Informe o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &qtdPontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados das cartas de forma organizada
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos1);
    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicos2);

    return 0;
}
// O código acima é um exemplo de como cadastrar e exibir informações de duas cartas de um jogo.
// Ele utiliza variáveis para armazenar os dados de cada carta, como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.
// O programa solicita ao usuário que insira essas informações e depois exibe os dados de ambas as cartas de forma organizada.
// O uso de " %[^\n]" para capturar nomes com espaços é uma boa prática, pois permite que o usuário insira nomes completos sem se preocupar com a quebra de linha.
