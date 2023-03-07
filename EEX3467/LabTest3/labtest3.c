#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}

int Ave(int num)
{
    return num * 5;
}

int main()
{
    int valuel, value2, value3, value4;

    printf("Enter two integer values: ");
    scanf("%d %d", &valuel, &value2);

    if (valuel < 0 || valuel > 25 || value2 < 0 || value2 > 25)
    {
        printf("Invalid input! Numbers should be between 0 and 25.\n");
        return 0;
    }

    if (valuel % value2 != 2)
    {
        printf("Invalid input! %d is not divisible by %d with a remainder of 2.\n", valuel, value2);
        return 0;
    }

    printf("valuel = %d\nvalue2 = %d\n", valuel, value2);

    value3 = cube(valuel);
    printf("Cube of valuel = %d\n", value3);

    value4 = Ave(value2);
    printf("Five times of value2 = %d\n", value4);

    int sum = value3 + value4;
    printf("Sum of value3 and value4 = %d\n", sum);

    int product = value3 * value4;
    printf("Product of value3 and value4 = %d\n", product);

    int difference = value3 - value4;
    printf("Difference of value3 and value4 = %d\n", difference);

    float quotient = (float)value3 / value4;
    printf("Quotient of value3 and value4 = %.2f\n", quotient);

    int modulus = value3 % value4;
    printf("Modulus of value3 and value4 = %d\n", modulus);

    return 0;
}