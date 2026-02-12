#include <stdio.h>

int main()
{

    int first, second;

    char operation;

    printf("Operation : - \n");
    scanf("%c", &operation);

    printf("Enter First Number.\n");
    scanf("%d", &first);

    printf("Enter Second Number.\n");
    scanf("%d", &second);

    switch (operation)
    {
    case '+':
        printf("Addition :  %d", first + second);

        break;

    case '-':
        printf("Substraction  :  %d", first - second);

        break;

    case '/':
        printf("Division  :  %d", first / second);

        break;

    case '*':
        printf("Multiplication  :  %d", first * second);

        break;

    case '%':
        printf("Modulo  :  %d", first % second);

        break;
    }

    return 0;
}