#include<stdio.h>

int main()
{

	int a,b,c,d;

	printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    printf("Enter c: \n");
    scanf("%d", &c);

    printf("Enter d: \n");
    scanf("%d", &d);

	if (a < b && a < c && a < d)
	{
		printf("A is minimum\n");
	}

	else if (b > a && c > a && c > a)
	{
		printf("A is minimum\n");
	}

	else if (c > b && d > b)
	{
		printf("B is minimum\n");
	}

	else if (d > c)
	{
		printf("C is minimum\n");
	}
	
	else{
		printf("D is minimum\n");
	}
	
	
	

	return 0;
}