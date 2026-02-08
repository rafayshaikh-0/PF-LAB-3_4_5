#include<stdio.h>
int main(){
	int a;
	float b;
	char ch;
	printf("Enter character\n");
	ch = getchar();
	printf("you entered: ");
	putchar(ch);
	printf("\nEnter integer\n");
	scanf("%d",&a);
	printf("you entered:");
	printf(" %d\n",a);
	printf("\nEnter decimal number\n");
	scanf("%f",&b);
	printf("you entered:");	
	printf(" %f\n",b);
	
}
