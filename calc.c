#include "calc.h"
#include <math.h>

double sum(double first, double second) {
    return first + second;
}

double sub(double first, double second) {
    return first - second;
}

double mult(double first, double second) {
    return first * second;
}

double div(double first, double second) {
    if (second == 0) {
        return NAN;
    }
    return first / second;
}

double calculation_boss(double first, double second, char op) {
    switch (op) {
        case '+':
            return sum(first, second);
        case '-':
            return sub(first, second);
        case '*':
            return mult(first, second);
        case '/':
            return div(first, second);
        default:
            return NAN;
    }

}