#include <stdio.h>
#include <stdlib.h>

/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de
objetos. O vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total
de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a
quantidade vendida de cada peça deve ficar em outro vetor, mas na mesma posição. Crie um
programa que receba os preços e as quantidades vendidas, armazenando-os em seus
respectivos vetores (ambos com tamanho dez). Depois, determine e mostre:

- um relatório contendo quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
deverá ser mostrado o valor geral das vendas e o valor da comissão que será paga ao vendedor;

- a quantidade do objeto mais vendido e sua posição no vetor (não se preocupe com empates.)*/

const int TAMANHO = 10; //tamanho vetor

void preenche_vetor(int vetor1[], float vetor2[]);
void relatorio(float objetos_valor[], int vendas_quant[]);

int main()
{
    int objeto_quant[TAMANHO];
    float objeto_valor[TAMANHO];

    printf("Informe o valor unitario de cada objeto, em seguida a quantidade de vendas.\n ");
    preenche_vetor(objeto_quant, objeto_valor); //pega os valores
    relatorio(objeto_valor, objeto_quant);
    return 0;
}

void preenche_vetor(int vetor1[], float vetor2[])
{
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("Valor do objeto %d: ", i + 1);
        scanf("%f", &vetor2[i]);
        printf("Quantidade de vendas do objeto %d:", i+1);
        scanf("%d", &vetor1[i]);
    }
}

void relatorio(float objetos_valor[], int vendas_quant[])
{
    int i, quant_m_vendido, mais_vendido;
    float total, total_todos = 0, comissao;
    printf("------------RELATORIO DE OBJETOS------"); //calcular e mostrar valor dos objetos
    for(i = 0; i < TAMANHO; i++){
        total = objetos_valor[i] * vendas_quant[i];
        total_todos += total; //pega o total de todas as vendas
        if(i == 0 || vendas_quant[i] > quant_m_vendido){//se for o primeiro numero ou se ultrapassar o total de vendas do passado, faca dele o novo mais vendido
            quant_m_vendido = vendas_quant[i];
            mais_vendido = i + 1;
        }
        printf("Objeto %d:\nQuantidade vendida: %d\nValor unitario: %.2f\nTotal: RS%.2f\n\n", i + 1, vendas_quant[i], objetos_valor[i], total);
    }
    comissao = 545 + (total_todos * 0.05 ); //salario
    printf("------------RELATORIO VENDAS------------\n");
    printf("\nValor total de vendas: %.2f", total_todos);
    printf("\nComissao do vendedor: %.2f", comissao);
    printf("\nO objeto %d foi o mais vendido com %d vendas.\n\n", mais_vendido, quant_m_vendido);
}


