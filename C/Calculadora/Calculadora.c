#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Digite dois n�meros: ");
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
                printf("Erro! Divis�o por zero n�o � permitida.");
                return 1;
            }
            break;
        default:
            printf("Operador inv�lido!");
            return 1;
    }

    printf("O resultado �: %.2lf", result);
    return 0;
}

