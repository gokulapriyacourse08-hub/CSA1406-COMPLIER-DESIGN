#include <stdio.h>

int main() {
    int n, i;
    char var[10], op1[10], op[5], op2[10];

    printf("Enter number of statements: ");
    scanf("%d", &n);

    printf("\nEnter Three Address Code:\n");

    for (i = 0; i < n; i++) {
        scanf("%s = %s %s %s", var, op1, op, op2);

        printf("\nMOV R0, %s", op1);

        if (op[0] == '+')
            printf("\nADD R0, %s", op2);
        else if (op[0] == '-')
            printf("\nSUB R0, %s", op2);
        else if (op[0] == '*')
            printf("\nMUL R0, %s", op2);
        else if (op[0] == '/')
            printf("\nDIV R0, %s", op2);

        printf("\nMOV %s, R0\n", var);
    }

    return 0;
}