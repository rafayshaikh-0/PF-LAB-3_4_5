#include<stdio.h>
int main (){
	int choice;
	int amount;
	int balance = 100000;
	printf("ATM MENU\n");
		printf("1. Balance Inquiry\n");
			printf("2. cash withdrawal\n");
				printf("3. Deposite\n");
					printf("4. Exit\n");
					
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch (choice){
		case 1 : 
		printf("your balance is: %d",balance); break;
		
		case 2 :
			printf("enter the amount you want to withdraw: ");
			scanf(" %d",&amount);
			printf("Your current balance after Witdrawal is: %d ",balance - amount );
			break;
		case 3 :
			printf("Enter the amount you want to deposite:");
			scanf(" %d",&amount);
			printf("Your current Balance after deposite is: %d",balance + amount);
			break;
		case 4 :
			printf("Exiting...");
			break;
		default :
			printf("Thank you!");
			
	}
}

