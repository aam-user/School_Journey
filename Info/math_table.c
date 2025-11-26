#include <stdio.h>

int main()
{
    int num, cont, n;
    scanf("%d", &num);
    for (n = 1; n < 11; n++)
    {
        printf("%d\n", n * num); // Fixed: one %d for one value, added \n for readability
    }
    return 0;
}