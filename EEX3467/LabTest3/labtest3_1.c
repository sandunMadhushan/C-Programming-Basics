#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num)
{
    return num * num * num;
}

// Function to calculate five times a number
int xfive(int num)
{
    return num * 5;
}

int main()
{
    int value1, value2, value3, value4;
    int *pvalue3 = &value3, *pvalue4 = &value4;
    float quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &value1, &value2);

    if (value1 < 0 || value1 > 25)
    {
        printf("Value1 is negative or greater than 25.\n");
        return 0;
    }

    if (value2 < 0 || value2 > 25)
    {
        printf("Value2 is negative or greater than 25.\n");
        return 0;
    }

    if (value1 % value2 != 2)
    {
        printf("Value1 is not divisible by Value2 with 2 as remainder.\n");
        return 0;
    }

    printf("Value1: %d\n", value1);
    printf("Value2: %d\n", value2);

    value3 = cube(value1);
    printf("Cube of Value1: %d\n", value3);

    value4 = xfive(value2);
    printf("Five times Value2: %d\n", value4);

    *pvalue3 += *pvalue4;
    printf("Sum of Value3 and Value4: %d\n", *pvalue3);

    *pvalue3 *= *pvalue4;
    printf("Product of Value3 and Value4: %d\n", *pvalue3);

    *pvalue3 -= *pvalue4;
    printf("Difference of Value3 and Value4: %d\n", *pvalue3);

    quotient = (float)*pvalue3 / *pvalue4;
    printf("Quotient of Value3 and Value4: %.2f\n", quotient);

    *pvalue3 %= *pvalue4;
    printf("Modulus of Value3 and Value4: %d\n", *pvalue3);

    return 0;
}