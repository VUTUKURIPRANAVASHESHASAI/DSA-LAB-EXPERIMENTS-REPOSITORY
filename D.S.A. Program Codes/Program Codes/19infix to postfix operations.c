//infix to postfix

#include <stdio.h>
#include <ctype.h>

// Global stack declaration
char stack[100];
int top = -1;

// Function to push elements onto the stack
void push(char c) {
    if (top >= 100 - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = c;
}

// Function to pop elements from the stack
char pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack[top--];
}

// Function to define operator precedence
int priority(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

int main() {
    char infix[] = "A+(B*C-D)/E";
    char c;
    
    printf("Infix : %s \n", infix);
    printf("Postfix : ");
    
    // Main conversion loop
    for (int i = 0; infix[i] != '\0'; i++) {
        c = infix[i];
        
        // If operand, print it immediately
        if (isalnum(c)) {
            printf("%c", c);
        }
        // If opening parenthesis, push to stack
        else if (c == '(') {
            push(c);
        }
        // If closing parenthesis, pop until opening parenthesis is found
        else if (c == ')') {
            while (stack[top] != '(') {
                printf("%c", pop());
            }
            pop(); // Remove '(' from stack
        }
        // If operator, handle precedence rules
        else {
            while (top != -1 && priority(stack[top]) >= priority(c)) {
                printf("%c", pop());
            }
            push(c);
        }
    }
    
    // Pop any remaining operators left in the stack
    while (top != -1) {
        printf("%c", pop());
    }
    
    printf("\n");
    return 0;
}