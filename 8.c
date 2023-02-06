#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num > 0)
    {
        case 1:
            printf("%d converted to negative: %d\n", num, -num);
            break;
        default:
            printf("%d converted to positive: %d\n", num, -num);
            break;
    }

    return 0;
}
