#include "io.h"
#include <math.h>
#include <stdio.h>

int input(char* op, double* first, double* second) {
    printf("Введите числа\n");
    if (scanf("%lf %lf", first, second) != 2) {
        printf("Некорректные числа\n");
        return 1;
    }

    int chr = 'm';
    while ((chr = getchar()) != '\n' && chr != EOF) {}

    printf("Введите знак действия\n");
    if ((scanf("%c", op) != 1) || (check_op(*op) == 0)) {
        printf("Некорректный знак действия\n");
        return 1;
    }
    return 0;
}

int check_op(char op) {
    if (op == '+' || op == '-' || op == '*' || op == '/') {
        return 1;
    }
    return 0;
}

void output(double number) {
    if (isnan(number)) {
        printf("Получился NAN\n");
    } else {
        printf("Результат: %lf\n", number);
    }
    return;
}