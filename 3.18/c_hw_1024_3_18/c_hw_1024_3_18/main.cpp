#include <stdlib.h>
#include <stdio.h>

float sales;
float salary;
float basic = 200.00;
float per = 0.09;

float main(void)
{
	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f",&sales);
	
	while (sales != -1)
	{
		salary = basic + sales * 0.09;
		printf("Salary is: ");
		printf("%.2f", salary);
		printf("\n");
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);
	}

	system("Pause");
	return 0;
}