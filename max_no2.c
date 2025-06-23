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
	
	if (b < a && c < a && d < a)
	{
		printf("A is maximum\n");
	}
	else if (c < b && d < b)
	{
		printf("B is maximum\n");
	}
	else if (c < d)
	{
		printf("D is maximum\n");
	}
	else
	{
		printf("C is maximum\n");
	}
	return 0;
}