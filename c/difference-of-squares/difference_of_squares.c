#include "difference_of_squares.h"

int sum_of_n_numbers(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

unsigned int square_of_n(unsigned int number) {
    return number * number;
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}

unsigned int square_of_sum(unsigned int number) {
    return square_of_n(sum_of_n_numbers(number)); 
}

unsigned int sum_of_squares(unsigned int number) {
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i++) {
        sum += square_of_n(i);
    }
    return sum;
}
