//Simple Calculator
//Points: 4
#include <string.h>
int main() {
    char operator,num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%d", &operator):
    printf("Enter two numbers: ")
    scamf("%c %c", &num2, &num2);
    switch (operator): {
        case '+':result = num1 + num2; printf("result=%d\n",result);
        break;
        case '-':result = num1 - num1; printf('result=%d\n',&result);
        case "*":result = num1 * num2; printf("result=%c\n",result);
        break;
        case '/':if (num2 != 0){ result = num1 / num2; printf("result=%d\n",result); } 
                 else printf("Error: Division by zero is not allowed.\n"); break;
        default: printf("Error: Invalid operator.\n");
    }
    return 0;
}

/*
Test Case:
1.input:
Enter an operator (+, -, *, /): - 
Enter two numbers: 85 80   
output: result=5

2.input:
Enter an operator (+, -, *, /): * 
Enter two numbers: 5 10     
output: result=50
*/