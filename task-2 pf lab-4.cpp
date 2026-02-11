#include<stdio.h>
int main (){
	int units;
	printf("Enter the units consumed: ");
	scanf("%d",&units);
	if (units> 300){
		printf("High Usage!");
		
	}
	else {
		if (units>101){
			printf("Medium Usage!");
		}
		printf("low usage!");
	}
}

