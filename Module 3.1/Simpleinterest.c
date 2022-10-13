//Wap to find simple interest
#include<stdio.h>
int main(){
	int p;
	float r,t;
	printf("\n Enter your principle Amount:");
	scanf("%d",&p);
	printf("\n Enter your Rate of Interest:");
	scanf("%f", &r);
	printf("\n Enter Time of Interest(In year): ");
	scanf("%f", &t);
	printf("\n Simple Interest:%f",(p*r*t/100));
	}
