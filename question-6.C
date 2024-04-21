// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int celcius;
   
   printf("enter your temprature in celcius: ");
   scanf("%d",&celcius);
   
   if(celcius<24){
       printf("cold");
   }else if(celcius>24 && celcius<38){
       printf("modarate");
   }else if(celcius>=38){
       printf("Hot");
   }
    return 0;
}