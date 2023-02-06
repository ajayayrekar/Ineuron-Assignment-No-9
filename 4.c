#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float a, b, c;

    while(1)
    {
        printf("\nMenu:\n");
        printf("1. Isosceles triangle\n");
        printf("2. Right angled triangle\n");
        printf("3. Equilateral triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter three side lengths: ");
                scanf("%f%f%f", &a, &b, &c);
                if(a == b || b == c || c == a)
                    printf("This is an isosceles triangle\n");
                else
                    printf("This is not an isosceles triangle\n");
                break;
            case 2:
                printf("Enter three side lengths: ");
                scanf("%f%f%f", &a, &b, &c);
                if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
                    printf("This is a right angled triangle\n");
                else
                    printf("This is not a right angled triangle\n");
                break;
            case 3:
                printf("Enter three side lengths: ");
                scanf("%f%f%f", &a, &b, &c);
                if(a == b && b == c)
                    printf("This is an equilateral triangle\n");
                else
                    printf("This is not an equilateral triangle\n");
                break;
            case 4:
                return 0;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
