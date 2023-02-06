#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2, discriminant;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch((int)discriminant)
    {
        case 0:
            root1 = root2 = -b / (2 * a);
            printf("The equation has equal roots: %.2f\n", root1);
            break;
        case 1:
        case -1:
            printf("The equation has no real roots.\n");
            break;
        default:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The equation has two real roots: %.2f and %.2f\n", root1, root2);
            break;
    }

    return 0;
}
