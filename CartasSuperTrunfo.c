#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // código da cidade
    int cod_cidade;
    // nome
    char nome_cidade[20];
    // população
    float populacao_cidade;
    // área
    double area_cidade;
    // PIB
    double pib_cidade;
    // número de pontos turísticos
    int num_pontos_tur_cidade;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // código da cidade

    // codigo
    printf("\n Digite o código da cidade:");
    scanf("%i", &cod_cidade);
    // nome
    printf("\n Digite o nome da cidade:");
    scanf("%s", nome_cidade);
    // população
    printf("\n Digite o número total da população:");
    scanf("%f", &populacao_cidade);
    // área
    printf("\n Digite a área da cidade:");
    scanf("%f", &area_cidade);
    // PIB
    printf("\n Digite o valor do PIB da cidade:");
    scanf("%f", &pib_cidade);
    // número de pontos turísticos
    printf("\n Digite a quantidade de pontos turisticos da cidade:");
    scanf("%i", &num_pontos_tur_cidade);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCidade cadastrada com sucesso!\n");
    // imprime codigo
    printf("Código: %d\n", cod_cidade);
    // imprime nome
    printf("Nome: %s\n", nome_cidade);
    // imprime populacao
    printf("População: %.2f\n", populacao_cidade);
    // imprime area
    printf("Área: %.1lf km²\n", area_cidade);
    // imprime pib
    printf("PIB: %.1lf bilhões\n", pib_cidade);
    // imprime numero de pontos
    printf("Pontos turísticos: %d\n", num_pontos_tur_cidade);
    return 0;
}
