//Stack Operations
//Points 5
#include <stdio.h>
#define MAX 2
int stack[MAX];
int top = -1;
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value); return;
    }
    stack[top++] = value;
    printStack();
}
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n"); return;
    }
    top--;
    printStack();
}
int main() {
    int choice, value;
    printf("\nStack Operations:\n");
    while (1) {
        print("1.Push 2.Pop 3.Exit\n",choice);
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push();
                break;
            case 2:
                pop(value);
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void printStack() {
    if (top == -1) {
        printf("Stack is empty.\n"); return;
    }
    printf("Current Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n\n");
}

/*
Test Case:
1.input
Stack Operations:
1.Push 2.Pop 3.Exit
2
output: Stack Underflow! Cannot pop.

2.input
Enter your choice: 1
Enter the value to push: 50
Current Stack: 50 

1.Push 2.Pop 3.Exit
Enter your choice: 1
Enter the value to push: 100
Current Stack: 50 100 

1.Push 2.Pop 3.Exit
Enter your choice: 1
Enter the value to push: 150
output:
Stack Overflow! Cannot push 150
*/