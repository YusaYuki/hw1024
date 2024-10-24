#include <stdio.h>
#include <stdlib.h>

int paycode;
float manager, hourly_rate, working_hours, weekly_sales, amount_of_item, pieceworker_earns_per_produce;

int main() {
	while (1) {
		printf("Enter the paycode(1:Manager 2:hourly worker 3:commission worker 4:pieceworker (-1 to end): ");
		scanf_s("%d", &paycode);
		if (paycode == -1)
			break;
		switch (paycode) 
		{
		case (1):
			printf("Enter the Manager's weekly salary: ");
			scanf_s("%f", &manager);
			printf("The Manager's weekly salary is %.2f$\n\n", manager);
			break;
		
		case (2):
			printf("Enter the hourly worker's hourly rate: ");
			scanf_s("%f", &hourly_rate);
			printf("Enter the hourly worker's working hours: ");
			scanf_s("%f", &working_hours);
			printf("The hourly worker's weekly salary is %.2f$\n\n", hourly_rate * working_hours);
			break;
		
		case (3):
			printf("Enter the commission worker's gross weekly sales: ");
			scanf_s("%f", &weekly_sales);
			printf("The commission worker's weekly salary is %.2f$\n\n", 250 + weekly_sales * 0.057);
			break;
		
		case (4):
			printf("Enter the pieceworker's amount of item they produce: ");
			scanf_s("%f", &amount_of_item);
			printf("Enter the pieceworker's they earns per produce: ");
			scanf_s("%f", &pieceworker_earns_per_produce);
			printf("The pieceworker's weekly salary is %.2f$\n\n", amount_of_item * pieceworker_earns_per_produce);
			break;
		}
	}
	system("pause");
	return 0;
}