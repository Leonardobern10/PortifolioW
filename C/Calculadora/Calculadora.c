#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Erro! Divisão por zero não é permitida.");
                return 1;
            }
            break;
        default:
            printf("Operador inválido!");
            return 1;
    }

    printf("O resultado é: %.2lf", result);
    return 0;
}

