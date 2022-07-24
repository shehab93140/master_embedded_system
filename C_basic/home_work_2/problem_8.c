#include <stdio.h>
void main(void)
{
    char operator;
    float result=0, num1=0, num2=0;
    printf("Enter operator either + or - or * or divide :  ");
    scanf("%c", &operator);
    printf("\nEnter two operands:");
    fflush(stdin);
    scanf("%f", &num1);
    fflush(stdin);
    scanf("%f", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
        //  default:
        //  break;
    }
    printf("%0.2f ", num1);
    printf("%c ", operator);
    printf("%0.2f = ", num2);
    printf("%0.2f ", result);
}