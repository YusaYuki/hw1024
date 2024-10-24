#include <stdio.h>
#include <stdlib.h>

float principal;
float rate;
float charge;
int day;
float day_temp;
float year = 365;

int main(void)
{
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &principal);

	while (principal != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &day);

		day_temp = float(day / year);
		charge = principal * rate * day_temp;
		printf("The interest charge is ");
		printf("%.2f\n", charge);

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
	}
	system("pause");
	return 0;

}
