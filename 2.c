#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    while(1)
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f%f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f%f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f%f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f%f", &num1, &num2);
                if(num2 == 0)
                    printf("Error: Cannot divide by zero\n");
                else
                {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                return 0;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
