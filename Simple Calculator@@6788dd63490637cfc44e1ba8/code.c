#include <stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    int sum = a + b;
    int subtract = a - b;
    int product = a * b;
    int divide = (b != 0) ? (a / b) : 0;

    switch (op)
    {
    case '+':
        printf("%d", sum);
        break;

    case '-':
        printf("%d", subtract);
        break;

    case '*':
        printf("%d", product);
        break;

    case '/':
        if

            (b != 0)
        {
            printf("%d", divide);
        }
        else
        {
            printf("error \n");
        }
        break;

    default:
        printf("invalid \n");
    }
    return 0;
}