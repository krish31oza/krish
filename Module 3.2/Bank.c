#include<stdio.h>
int main(){
	int Account, Pin, Choice;
	printf(" Enter your Account Number.:" );
	scanf("%d", &Account);
	printf("Enter your Pin.:");
	scanf("%d", &Pin);
	if(Account==11){
		if(Pin==123){
			printf("Succesfully Login.....\n");
		}else{
			printf("Invalid Pin......\n");
			
		}
	}else{printf("Invalid Account No.....\n");
	
	}
	
}                                                                                                                                                                                     
