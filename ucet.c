#include <stdio.h>

int BalanceChange(double creditInterest, double debetInterest, int balance) {
	int change = 0;
	if (balance > 0)
		change = balance * creditInterest;
		
	if (balance < 0)
		change = balance * debetInterest;
	
	return change;
}		

int main (void) {
	double creditInterest, debetInterest;
	int balance = 0;
	int deposit;
	int day = 0; 
	int i = -1;
	
	printf("Zadejte kreditni urok [%%]:\n");
	if (scanf("%lf", &creditInterest) != 1 || creditInterest < 0 ) {
		printf("Nespravny vstup.\n");
		return 1;
	}
		
	printf("Zadejte debetni urok [%%]:\n");
	if (scanf("%lf", &debetInterest) != 1 || debetInterest < 0 ) {
		printf("Nespravny vstup.\n");
		return 1;
	}
	
	creditInterest /= 100;
	debetInterest /= 100;

	printf("Zadejte transakce:\n");
	
	while (1){
		
		if (scanf("%d, %d", &day, &deposit) != 2){
			printf("Nespravny vstup.\n");
			return 1;
		}
		
		if (day <= i || day < 0) {
			printf("Nespravny vstup.\n");
			return 1;
		}

		while (i < day) {
			balance += BalanceChange(creditInterest, debetInterest, balance);
			i++;
		}
		
		balance = balance + (deposit * 100);
		
		if (deposit == 0) {
			break;
		}	
	}
	double output = double (balance) / 100;
	printf("Zustatek: %.2lf\n", output);
	
	return 0;
}
