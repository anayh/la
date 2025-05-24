// 11 - Em uma fábrica trabalham homens e mulheres divididos em três classes:  
// • Trabalhadores que fazem até 30 peças por mês – classe 1;  
// • Trabalhadores que fazem de 31 a 35 peças por mês – classe 2;  
// • Trabalhadores que fazem mais de 35 peças por mês – classe 3.  
// A classe 1 recebe salário-mínimo (R$1518,00). A classe 2 recebe salário-mínimo 
// mais 3% do salário-mínimo por peça acima das 30 peças iniciais. A classe 3 recebe 
// salário-mínimo mais 5% do salário-mínimo por peça fabricada acima das 30 peças 
// iniciais. A fábrica possui 15 operários.  
// Faça um programa que leia para cada operário: o seu número (inteiro), o número de 
// peças fabricadas no mês e seu sexo (1 para masculino ou 2 para feminino). Os 
// dados devem ser armazenados em 3 vetores: vetNumOp, vetNumPecas e vetSexo 
// respectivamente. O programa deve calcular os salários dos funcionários, 
// armazená-los em um quarto vetor (vetSalarios) e mostrar um relatório que 
// contenha o número do operário, a quantidade de peças fabricadas no mês e o seu 
// salário. O programa deve mostrar também o total da folha de pagamento da fábrica.

#include <stdio.h>

#define NUM_OPERARIOS 15
#define SALARIO_MINIMO 1518.00

int main() {
    int vetNumOp[NUM_OPERARIOS];
    int vetNumPecas[NUM_OPERARIOS];
    int vetSexo[NUM_OPERARIOS];
    float vetSalarios[NUM_OPERARIOS];
    float folhaPagamento = 0.0;

    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("\nOperário %d\n", i + 1);
        printf("Número do operário: ");
        scanf("%d", &vetNumOp[i]);

        printf("Número de peças fabricadas: ");
        scanf("%d", &vetNumPecas[i]);

        printf("Sexo (1 - Masculino, 2 - Feminino): ");
        scanf("%d", &vetSexo[i]);

        int pecas = vetNumPecas[i];

        if (pecas <= 30) {
            vetSalarios[i] = SALARIO_MINIMO;
        } else if (pecas <= 35) {
            vetSalarios[i] = SALARIO_MINIMO + (pecas - 30) * 0.03 * SALARIO_MINIMO;
        } else {
            vetSalarios[i] = SALARIO_MINIMO + (pecas - 30) * 0.05 * SALARIO_MINIMO;
        }

        folhaPagamento += vetSalarios[i];
    }

    for (int i = 0; i < NUM_OPERARIOS; i++) {
        printf("%d\t\t%d\t\t\t%.2f\n", vetNumOp[i], vetNumPecas[i], vetSalarios[i]);
    }
    printf("Total da folha de pagamento: R$ %.2f\n", folhaPagamento);

    return 0;
}
