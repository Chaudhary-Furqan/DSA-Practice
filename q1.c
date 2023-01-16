#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum TypeTag {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    FIBONACCI,
    NUMBER
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
} Node;

Node *makeFunc(TypeTag op, int a, int b) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->type = op;
    node->value = 0;
    switch (op) {
        case ADD:
            node->value = a + b;
            break;
        case SUBTRACT:
            node->value = a - b;
            break;
        case MULTIPLY:
            node->value = a * b;
            break;
        case DIVIDE:
            node->value = a / b;
            break;
        case FIBONACCI:
            a = fabs(a);
            int f[(int)a+1];
            int i;
            f[1] = 0;
            f[2] = 1;
            for (i = 3; i <= (int)a; i++) {
                f[i] = f[i-1] + f[i-2];
            }
            node->value = f[(int)a];
            break;
    }
    return node;
}

void calc(Node *node) {
    if (node->type == NUMBER) {
        printf("%i\n", node->value);
    } else {
        printf("%i\n", node->value);
    }
}

int main() {
    Node *add = makeFunc(ADD, 10, 6);
    Node *mul = makeFunc(MULTIPLY, 5, 4);
    Node *sub = makeFunc(SUBTRACT, add->value ,mul->value );
    Node *fibo = makeFunc(FIBONACCI, sub->value, 0);
    printf("Addition: ");
    calc(add);
    printf("Multiplication: ");
    calc(mul);
    printf("Subtraction: ");
    calc(sub);
    printf("Fibonacci: ");
    calc(fibo);
    return 0;
}
