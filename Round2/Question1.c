//Sum of Digits of a Number
//Points: 2
#include <stdlo.h>
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf('%d', n);
    while (n > 0) {
        sum = 0;
        (sum += n) % 10;
        n / 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}

/*
Test Case:
1.input: 123     output: 6

2.input: 7664    output: 23
*/