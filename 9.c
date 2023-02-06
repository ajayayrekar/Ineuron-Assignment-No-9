#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0:
            printf("The nearest upper odd number is: %d\n", num + 1);
            break;
        default:
            printf("The number is already odd.\n");
            break;
    }

    return 0;
}
