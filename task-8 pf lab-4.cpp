#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    int i, power = 1;

    printf("Scientific Calculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f", num1 + num2);
            break;

        case 2:
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f", num1 - num2);
            break;

        case 3:
            scanf("%f %f", &num1, &num2);
            printf("Result: %.2f", num1 * num2);
            break;

        case 4:
            scanf("%f %f", &num1, &num2);
            if (num2 != 0)
                printf("Result: %.2f", num1 / num2);
            else
                printf("Error: Division by zero not allowed");
            break;

        case 5:
            scanf("%f", &num1);
            printf("Result: %.2f", num1 * num1);
            break;

        case 6:
            scanf("%f", &num1);
            printf("Result: %.2f", num1 * num1 * num1);
            break;

        case 7:
            scanf("%f", &num1);
            if (num1 >= 0) {
                float sqrt = num1 / 2;
                for(i = 0; i < 10; i++)
                    sqrt = (sqrt + num1 / sqrt) / 2;
                printf("Result: %.2f", sqrt);
            } else {
                printf("Error: Square root of negative number");
            }
            break;

        case 8:
            scanf("%f %f", &num1, &num2);
            power = 1;
            for(i = 0; i < (int)num2; i++)
                power *= num1;
            printf("Result: %d", power);
            break;

        case 9:
            scanf("%f", &num1);
            if (num1 < 0)
                num1 = -num1;
            printf("Result: %.2f", num1);
            break;

        default:
            printf("Invalid menu choice");
    }

    return 0;
}

