#include<stdio.h>
int main(){
	int a=10,b=20,c=30,d=40,e=50;
	printf("%s", a>b&&a>c&&c>d&&d>e?" A is greater":
	("s", b>a&&b>c&&b>d&&b>e?" B is greater":
	("%s", c>a&&c>b&&c>d&&c>e?" C is greater":
	("%s", d>a&&d>b&&d>c&&d>e?" D is greater":
	("E is greater" )))));
}
