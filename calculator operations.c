#include <stdio.h>
#include <math.h>

int main()
 {
    char operator;
    float num1,num2,result;
    printf("Enter operator (+,-,*,/,%,^): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator)                    // Perform the operation based on the operator
    {
        case '+':
            result = num1+num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1-num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1*num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error! Modulus by zero.\n");
            } else {
                result =fmod(num1,num2);
                printf("Result: %.2f\n", result);
            }
            break;
        case '^':
            result = pow(num1,num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
