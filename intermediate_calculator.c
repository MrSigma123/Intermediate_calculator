#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float num1, num2;
    int check1, check2;  // to check if the num1 and num2 are of an integer type
    char operator_math;

    printf("This is simple calculator, which makes you able to use basic mathematical operations.\n");
    printf("Please type which kind of the operation you want to be performed (+, -, *, /, %%, ^, s[sqrt]): ");
    scanf ("%c", &operator_math);
    printf("\nPlease type the number/numbers on which you want the operation to be performed\n"
            "(separate the numbers by using space and confirm your choice by pressing ENTER): ");

    switch (operator_math)
    {
    case '+':
        scanf("%f %f", &num1, &num2);
        printf("\n%f + %f = %f", num1, num2, num1 + num2);
        break;
    case '-':
        scanf("%f %f", &num1, &num2);
        printf("\n%f - %f = %f", num1, num2, num1 - num2);
        break;
    case '*':
        scanf("%f %f", &num1, &num2);
        printf("\n%f * %f = %f", num1, num2, num1 * num2);
        break;
    case '/':
        scanf("%f %f", &num1, &num2);
        if (num2 != 0)
            printf("\n%f / %f = %f", num1, num2, num1 / num2);
        else
            printf("/nThe second operand is equal to 0, the operation can not be performed");
        break;
    case '%':
        scanf("%f %f", &num1, &num2);
        check1 = num1;
        check2 = num2;
        if (check1 == num1 && check2 == num2)
            printf("\n%f %% %f = %d", num1, num2, (int)num1 % (int)num2);
        else
            printf("\nAttention: The modulo operation can be done just on the integer numbers!\n"
                   "Those are not intiger numbers They are floating point numbers!");
        break;
    case '^':
        scanf("%f %f", &num1, &num2);
        printf("\n%f ^ %f = %f", num1, num2, pow(num1, num2));
        break;
    case 's':
        scanf("%f", &num1);
        printf("\nsquare root of %f is %lf", num1, sqrt((double)num1));
        break;
    default:
        printf("\nThe operator can't be recognised. Error occurred...");
        break;
    }
    return 0;
}
