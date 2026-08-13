#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of n natural numbers=%d\n", n, sum);
    return 0;
}