//postfix expression evaluation

#include <stdio.h>
#include <ctype.h>

// Global stack declaration
int stack[50];
int top = -1;

int main() {
    char exp[50], c;
    int i, a, b;
    
    printf("Enter Postfix Expression: ");
    scanf("%s", exp);
    
    // Scan each character from left to right
    for (i = 0; exp[i] != '\0'; i++) {
        c = exp[i];
        
        // If the character is a digit, convert it to integer and push to stack
        if (isdigit(c)) {
            stack[++top] = c - '0'; 
        } 
        // If the character is an operator, pop two elements and perform operation
        else {
            b = stack[top--]; // Second operand
            a = stack[top--]; // First operand
            
            switch (c) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }
    
    // The final result will be at the top of the stack
    printf("Result = %d\n", stack[top]);
    
    return 0;
}