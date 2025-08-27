#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /*Definição das variáveis*/ /*TODO: ajustar os tipos de variáveis para eliminar os problemas.*/
    int Pturisticos1, Pturisticos2, opcao;
    double area1, area2, pib1, pib2, Dpopulacional1, Dpopulacional2;
    char nome1[80], nome2[80], estado1[40], estado2[40], codigo1[40], codigo2[40];
    unsigned long int populacao1, populacao2;
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

    /*Leitura dos dados inseridos pelo usuario*/

    printf("Digite os dados da primeira cidade a seguir:\n\n");

    printf("Insira o código da primeira cidade:\n");
    scanf("%s", codigo1);
    getchar();

    printf("Agora insira o Estado da primeira cidade:\n");
    scanf(" %[^\n]", estado1); /*estou reutilizando os códigos do desafio de cadastro das cartas.*/

    printf("Agora insira o nome da primeira cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Agora insira a população da primeira cidade:\n");
    scanf("%lu", &populacao1);
    getchar();

    printf("Agora insira a área(KM²) da primeira cidade:\n");
    scanf("%lf", &area1);
    getchar();

    printf("Agora insira o PIB da primeira cidade:\n");
    scanf("%lf", &pib1);
    getchar();

    printf("Agora insira o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &Pturisticos1);
    getchar();

    printf("\n\n"); /*Para melhorar a apresentação.*/

    /*Analise da segunda carta*/

    printf("Agora que temos as informações da primeira cidade, vamos definir\nas informações da segunda cidade a seguir.\n\n");

    printf("Insira o código da segunda cidade:\n");
    scanf("%s", codigo2);
    getchar();

    printf("Agora insira o Estado da primeira cidade:\n");
    scanf(" %[^\n]", estado2);

    printf("Agora insira o nome da segunda cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Agora insira a população da segunda cidade:\n");
    scanf("%lu", &populacao2);
    getchar();

    printf("Agora insira a área(KM²) da segunda cidade:\n");
    scanf("%lf", &area2);
    getchar();

    printf("Agora insira o PIB da segunda cidade:\n");
    scanf("%lf", &pib2);
    getchar();

    printf("Agora insira o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &Pturisticos2);
    getchar();

    printf("\n");

    /*calculo da densidade populacional*/

    Dpopulacional1 = populacao1 / area1;
    Dpopulacional2 = populacao2 / area2;

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

    printf("Agora escola o critério de comparação:\n\n1 - População.\n2 - Área.\n3 - PIB.\n4 - Pontos Turisticos.\n5 - Densidade Populacional");
    scanf("%d", &opcao);

    printf("\n"); /*Para melhorar a visibilidade*/

    switch (opcao){
    case 1:
    if(populacao1 > populacao2){
        printf("Cidade 1 é a vencedora.\n");
    }else if (populacao1 < populacao2){
        printf("Cidade 2 é a vencedora.\n");
    }else{
        printf("As duas cidades tem populações iguais.\n");
    }
    break;
    case 2:
    if(area1 > area2){
        printf("Cidade 1 é a vencedora.\n");
    }else if (area1 < area2){
        printf("Cidade 2 é a vencedora.\n");
    }else{
        printf("As duas cidades tem áreas iguais.\n");
    }
    break;

    case 3:
    if(pib1 > pib2){
        printf("Cidade 1 é a vencedora.\n");
    }else if (pib1 < pib2){
        printf("Cidade 2 é a vencedora.\n");
    }else{
        printf("As duas cidades tem PIBs iguais\n");
    }
    break;

    case 4:
    if(Pturisticos1 > Pturisticos2){
        printf("Cidade 1 é a vencedora.\n");
    }else if(Pturisticos1 < Pturisticos2){
        printf("Cidade 2 é a vencedora.\n");
    }else{
        printf("As duas cidades tem a mesma quantidade de pontos turísticos.\n\n");
    }
    break;

    case 5:
    if(Dpopulacional1 < Pturisticos2){
        printf("Cidade 1 é a vencedora");
    }else if(Dpopulacional1 > Dpopulacional2){
        printf("Cidade 2 é a vencedora");
    }else {
        printf("As duas cidades tem a mesma Densidade Populacional.");
    }
}
    

    return 0;
}