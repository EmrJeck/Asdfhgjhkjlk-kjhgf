#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%i%i", &a, &b);

    for(int i = b-1; i > a; --i)
    {
        printf("%i ", i);
    }
    return 0;
}