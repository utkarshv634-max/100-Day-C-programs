#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is a positive number\n", number);
        scanf("%d", &number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number\n", number);
        scanf("%d", &number);
    }
    else
    {
        printf("%d is zero\n", number);
        scanf("%d", &number);
    }
    return 0;
}
