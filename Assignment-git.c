#include <stdio.h>

int main() {
    float a, b;
    char op;

    while (1) {
        scanf("%f%c%f", &a, &op, &b);

        switch (op) {
            case '+':
                printf("= %.2f\n\n", a + b);
                break;
            case '-':
                printf("= %.2f\n\n", a - b);
                break;
            case '*':
                printf("= %.2f\n\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("= %.2f\n\n", a / b);
                else
                    printf("= หารรรรรรด้วยศูนย์ไม่ได้ooooooo\n\n");
                break;
            default:
                printf("= เครื่องหมายยยยไม่ถูกต้องooooooo\n\n");
        }
    }
printf("Calculator Program\n");
    return 0;
}
