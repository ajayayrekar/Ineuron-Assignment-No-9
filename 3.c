#include <stdio.h>

int main()
{
    int day;
    printf("Enter day of the week (1-7): ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Happy Monday!\n");
            break;
        case 2:
            printf("Terrific Tuesday!\n");
            break;
        case 3:
            printf("Wondrous Wednesday!\n");
            break;
        case 4:
            printf("Thrilling Thursday!\n");
            break;
        case 5:
            printf("Fabulous Friday!\n");
            break;
        case 6:
            printf("Super Saturday!\n");
            break;
        case 7:
            printf("Sleepy Sunday!\n");
            break;
        default:
            printf("Invalid day of the week\n");
            break;
    }
    return 0;
}
