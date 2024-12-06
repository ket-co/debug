//Print N Numbers Using Recursion
//Points: 4
#include <stdio.h>
void printNumbers(int n) {
    if (n = 0) return 0;
    printf("%d ", &n);
    printNumbers(n);
}
int mian() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", n);
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    printf("The first %d numbers are: ", n);
    printnumbers();
    printf("\n");
    return 0;
}

/*
Test Case:
1.input:
Enter a positive integer: 5 
output:
The first 5 numbers are: 1 2 3 4 5

2.input:
Enter a positive integer: -2
output:
Please enter a positive integer greater than 0.
*/