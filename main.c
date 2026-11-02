#include "io.h"
#include "calc.h"

int main(void) {
    char operator = ' ';
    double first_number = 0, second_number = 0;
    int input_res = input(&operator, &first_number, &second_number);
    if (input_res != 0) {
        return 1;
    }
    double answer = calculation_boss(first_number, second_number, operator);
    output(answer);
    return 0;
}