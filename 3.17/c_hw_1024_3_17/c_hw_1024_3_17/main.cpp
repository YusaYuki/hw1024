#include<stdio.h>
#include<stdlib.h>

int account;
float b_b;
float charge;
float credit;
float limit;
float temp;

int main(void)
{	
	printf("Enter account number (-1 to end): ");
	scanf_s("%d", &account);

	
	while (account != -1)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &b_b);

		printf("Enter total charge: ");
		scanf_s("%f", &charge);

		printf("Enter total credit: ");
		scanf_s("%f", &credit);

		printf("Enter credit limit: ");
		scanf_s("%f", &limit);

		if (limit < (b_b + credit))
		{
			printf("Account:      ");
			printf("%d", account);
			printf("\n");

			printf("Credit limit: ");
			printf("%.2f", limit);
			printf("\n");

			temp = b_b + credit;
			printf("Balance:      ");
			printf("%.2f", temp);
			printf("\n");
			
			printf("Credit Limit Exceeded");
		}
			
		printf("\n");

		printf("Enter account number (-1 to end):");
		scanf_s("%d", &account);
	}
	
	system("Pause");
	return 0;
}