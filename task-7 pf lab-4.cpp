#include<stdio.h>
int main(){
	float a,b;
	printf("input total bill ammount: ");
	scanf("%f",&a);
	if(a>=5000){
		b=a*0.8;
		printf("total ammount after discount is : %.2f",b);
	}
	else if(a>=3000){
		b=a*0.9;
		printf("total ammount after discount is : %.2f",b);
	}
	else{
		printf("no discount! bill is same : %.2f",a);
	}
}
