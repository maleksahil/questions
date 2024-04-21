// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int num1,num2,num3;
 
 printf("enter the first number: ");
 scanf("%d",&num1);
  printf("enter the second number: ");
 scanf("%d",&num2);
  printf("enter the third number: ");
 scanf("%d",&num3);
 
 if(num1>num2 && num1>num3){
     printf("%d is biggest number",num1);
 }
 if(num2>num1 && num2>num3){
     printf("%d is biggest number",num2);
 }
 if(num3>num1 && num3>num2){
     printf("%d is biggest number",num3);
 }

    return 0;
}