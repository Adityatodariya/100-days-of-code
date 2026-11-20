
#include <stdio.h>

int main()
{
    float cp, sp, percentage;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (cp <= 0)
        printf("Invalid cost price.");
    else if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f\n", sp - cp);
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (sp < cp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f\n", cp - sp);
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else
        printf("No Profit No Loss.");

    return 0;
}
