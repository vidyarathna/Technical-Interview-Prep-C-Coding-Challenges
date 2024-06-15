#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if parentheses are balanced
bool parenthesesMatching(char exp[]) {
    char stack[100]; // Stack to store opening parentheses
    int top = -1;    // Initialize top of stack

    // Traverse the expression
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            // Push opening parentheses onto the stack
            stack[++top] = exp[i];
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            // Check for closing parentheses
            if (top == -1) {
                // Stack is empty, no opening parenthesis to match
                return false;
            } else {
                char popped = stack[top--];
                if ((exp[i] == ')' && popped != '(') ||
                    (exp[i] == '}' && popped != '{') ||
                    (exp[i] == ']' && popped != '[')) {
                    // Mismatched parentheses
                    return false;
                }
            }
        }
    }

    // Check if stack is empty
    return top == -1;
}

int main() {
    char expr1[] = "{(a+b)*(c-d)}";
    char expr2[] = "((a+b)*(c-d))";
    char expr3[] = "{(a+b)*(c-d)";
    char expr4[] = "((a+b)*[c-d])";

    printf("%s: %s\n", expr1, parenthesesMatching(expr1) ? "Balanced" : "Not balanced");
    printf("%s: %s\n", expr2, parenthesesMatching(expr2) ? "Balanced" : "Not balanced");
    printf("%s: %s\n", expr3, parenthesesMatching(expr3) ? "Balanced" : "Not balanced");
    printf("%s: %s\n", expr4, parenthesesMatching(expr4) ? "Balanced" : "Not balanced");

    return 0;
}
