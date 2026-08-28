#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char lhs[10], op1[10], op[5], op2[10];
    char expr[20][30], temp[20][10];
    int count = 0;

    printf("Enter number of statements: ");
    scanf("%d", &n);

    printf("\nEnter Three Address Code:\n");

    for (i = 0; i < n; i++) {
        scanf("%s = %s %s %s", lhs, op1, op, op2);

        printf("\nOriginal: %s = %s %s %s\n",
               lhs, op1, op, op2);

        sprintf(expr[count], "%s %s %s", op1, op, op2);

        for (j = 0; j < count; j++) {
            if (strcmp(expr[count], expr[j]) == 0) {
                printf("Optimized: %s = %s\n", lhs, temp[j]);
                break;
            }
        }

        if (j == count) {
            strcpy(temp[count], lhs);
            printf("Optimized: %s = %s %s %s\n",
                   lhs, op1, op, op2);
            count++;
        }
    }

    return 0;
}