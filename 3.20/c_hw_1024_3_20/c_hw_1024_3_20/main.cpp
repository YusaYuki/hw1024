#include <stdio.h>
#include <stdlib.h>

int hour;
float rate;
float temp;
float salary;

int main(void)
{
	printf("Enter # of hours work(-1 to end): ");
	scanf_s("%d", &hour);
	while (hour != -1)
	{
		printf("Enter hourly rate of the worker($00.00): ");
		scanf_s("%f", &rate);

		if (hour > 40)
			salary = hour * rate + rate / 2;
		else
			salary = hour * rate;

		printf("Salary is $");
		printf(" % .2f", salary);
		printf("\n");

		printf("Enter # of hours work(-1 to end): ");
		scanf_s("%d", &hour);

	}
	

	system("Pause");
	return 0;
}