#include<stdio.h>
int main (){
	char  username;
	int pass;
	printf("Enter username: ");
	scanf(" %c",&username);
	
	printf("Enter password: ");
	
	scanf("%d",&pass);
	if (username == 'f' && pass == 12345){
		printf("Login successfull!");
	}
	else {
	printf("login failed");}
	return 0 ;
}

