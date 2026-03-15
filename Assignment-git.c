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
                    printf("= หารด้วยศูนย์ไม่ได้\n\n");
                break;
            default:
                printf("= เครื่องหมายไม่ถูกต้อง\n\n");
        }
    }
printf("Calculator Program\n");
    return 0;
}
