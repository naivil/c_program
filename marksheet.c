#include <stdio.h>

int main()
{
	int sub1, sub2, sub3, Rollno;
	float Avg;
	char Name[6];

	printf("Enter your Name\n");
	scanf("%s", Name);

	printf("Enter your RollnN :-.\n");
	scanf("%d", &Rollno);

	printf("Enter marks of Sub1 :-\n");
	scanf("%d", &sub1);

	printf("Enter marks of Sub2 :-\n");
	scanf("%d", &sub2);

	printf("Enter marks of Sub3 :-\n");
	scanf("%d", &sub3);

	Avg = (sub1+sub2+sub3)/3;

	printf("\n  ____________________________________________");
    printf("\n |             Marksheet                      |");
    printf("\n |                                            |");
    printf("\n |____________________________________________|");
    printf("\n |  Rollno :-   %d                            |",Rollno);
    printf("\n |  Name :-     %s                       |",Name);
    printf("\n |  Marks of sub1 :-  %d                      |",sub1);
    printf("\n |  Marks of sub2 :-  %d                      |",sub2);
    printf("\n |  Marks of sub3 :-  %d                      |",sub3);
    printf("\n |  Average Mark :-   %.2f                   |",Avg);
    printf("\n |____________________________________________|\n");


	if (sub1 > 35 && sub2 > 35 && sub3 > 35)
	{
		printf("You are pass\n");

		if (Avg > 90)
		{
			printf("grade is A\n");
		}
		else if (Avg > 80)
		{
			printf("grade is B\n");
		}
		else if (Avg > 70)
		{
			printf(" grade is C\n");
		}
		else if (Avg > 60)
		{
			printf(" grade is D\n");
		}
        else
        {
            printf(" grade is E\n");  
        }
	}
	else
	{
		printf("You are fail\n");
	}

	return 0;
}