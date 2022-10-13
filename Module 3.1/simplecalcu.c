#include <stdio.h>
int main(){
   char Operator;
   float a, b, c = 0;
   printf("\n Enter any one operator like +, -, *, / : ");
   scanf("%c", &Operator);
   printf("Enter the values of Operands a and b \n : ");
   scanf("%f%f", &a, &b);
   switch(Operator){
      case '+': c = a + b;
         break;
      case '-': c = a - b;
         break;
      case '*': c = a * b;
         break;
      case '/': c = a / b;
         break;
      default: printf("\n Invalid Operator ");
   }
   printf("The value = %f", c);
   return 0;
}
