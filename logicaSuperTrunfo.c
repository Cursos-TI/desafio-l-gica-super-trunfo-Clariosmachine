#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Carta 1:
    char c1_estado;
    char c1_codigo[4];
    char c1_nomeDaCidade[50];
    int c1_população;
    float c1_area, c1_densidadePopulacional;
    int c1_pib;
    int c1_numedoDePontosTuristicos;

    //Carta 2:
    char c2_estado;
    char c2_codigo[3];
    char c2_nomeDaCidade[50];
    int c2_população;
    float c2_area, c2_densidadePopulacional;
    int c2_pib;
    int c2_numedoDePontosTuristicos;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //Inserindo os dados da Carta 1:
    printf("Informe o Estado da Cidade_01 (um caractere de 'A a Z'): \n");
    scanf("%c", &c1_estado);
    printf("Informe o código da Cidade_01 (O Estado + o número): \n");
    scanf("%s", c1_codigo);
    printf("Informe o nome da Cidade_01 (até 50 caracteres): \n");
    scanf("%s", c1_nomeDaCidade);
    printf("Digite o número da população da Cidade_01: \n");
    scanf("%d", &c1_população);
    printf("Digite a área em km2 da Cidade_01: \n");
    scanf("%f", &c1_area);
    printf("Informe o PIB da Cidade_01: \n");
    scanf("%d", &c1_pib);
    printf("Digite o número de pontos turísticos da Cidade_01 \n");
    scanf("%d", &c1_numedoDePontosTuristicos);
    c1_densidadePopulacional = c1_população / c1_area;

    //prints da Carta 1
    printf("\n\nUF:  %c\n", c1_estado);
    printf("Código: %s\n", c1_codigo);
    printf("Nome da cidade: %s\n", c1_nomeDaCidade);
    printf("Popupação de %d habitantes.\n", c1_população);
    printf("A área de cidade é de %f KM2.\n", c1_area);
    printf("A cidade tem um PIB de R$ %i.\n", c1_pib);
    printf("Existem %i pontos turísticos na cidade.\n", c1_numedoDePontosTuristicos);
    printf("A densidade populacional = %f \n\n", c1_densidadePopulacional);

    //Inserindo os dados da Carta 2:
    printf("Informe o Estado da Cidade_02 (um caractere de 'A a Z'): \n");
    scanf(" %c", &c2_estado);  // Um espaço pra poder não registrar o valor vindo da linha anterior
    printf("Informe o código da Cidade_02 (O Estado + o número): \n");
    scanf("%s", c2_codigo);
    printf("Informe o nome da Cidade_02 (até 50 caracteres): \n");
    scanf("%s", c2_nomeDaCidade);
    printf("Digite o número da população da Cidade_02: \n");
    scanf("%d", &c2_população);
    printf("Digite a área em km2 da Cidade_02: \n");
    scanf("%f", &c2_area);
    printf("Informe o PIB da Cidade_02: \n");
    scanf("%d", &c2_pib);
    printf("Digite o número de pontos turísticos da Cidade_02 \n");
    scanf("%d", &c2_numedoDePontosTuristicos);
    c2_densidadePopulacional = c2_população / c2_area;

    //prints da Carta 2
    printf("\n\nUF:  %c\n", c2_estado);
    printf("Código: %s\n", c2_codigo);
    printf("Nome da cidade: %s\n", c2_nomeDaCidade);
    printf("Popupação de %d habitantes.\n", c2_população);
    printf("A área de cidade é de %f KM2.\n", c2_area);
    printf("A cidade tem um PIB de R$ %i.\n", c2_pib);
    printf("Existem %i pontos turísticos na cidade.\n", c2_numedoDePontosTuristicos);
    printf("A densidade populacional = %f \n\n", c2_densidadePopulacional);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if(c1_densidadePopulacional > c2_densidadePopulacional){
        printf("A cidade %s tem uma densidade populacional maior que a cidade %s \n", c1_nomeDaCidade, c2_nomeDaCidade);
        printf("A carta vencedora é a Carta_1");
    } else{
        printf("A cidade %s tem uma densidade populacional maior que a cidade %s \n", c2_nomeDaCidade, c1_nomeDaCidade);
        printf("A carta vencedora é a Carta_2");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
