#include<stdio.h>
int main(){
	int attendance ;
	printf("Enter your Attendance percentage: ");
	scanf("%d",&attendance);
	if (attendance>=75){
		printf("You are eligible for Exam! ");
	}
	else
	{
		printf("Not eligible");
	}
}

