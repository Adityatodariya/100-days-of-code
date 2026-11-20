
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
        printf("Invalid triangle.");
    else if (a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid triangle.");
    else if (a == b && b == c)
        printf("Triangle is Equilateral.");
    else if (a == b || b == c || a == c)
        printf("Triangle is Isosceles.");
    else
        printf("Triangle is Scalene.");

    return 0;
}
