#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    printf("Enter c: \n");
    scanf("%d", &c);

    printf("Enter d: \n");
    scanf("%d", &d);


    if (a > d && a > b && a > c)
    {
        printf("A is max\n");
    }
    else if (b > c && b > d)
    {
        printf("B is max\n");
    }
    else if (c > d)
    {
        printf("C is max\n");
    }
    else
    {
        printf("D is max\n");
    }

    return 0;
}