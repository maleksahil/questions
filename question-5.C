// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int PA,DA,TA;
   
   printf("enter your purchase amount: ");
   scanf("%d",&PA);
   
   if(PA<100){
       printf("purchase amount: %d",PA);
   }else if(PA>100 && PA<500){
       DA=PA*5/100;
       TA = PA-DA;
       printf("purchase amount: %d\n",PA);
       printf("discount amount: %d\n",DA);
       printf("total amount: %d\n",TA);
   }else if(PA>500 && PA<1000){
       DA=PA*10/100;
       TA = PA-DA;
       printf("purchase amount: %d\n",PA);
       printf("discount amount: %d\n",DA);
       printf("total amount: %d\n",TA);
   }else if(PA>1000){
       DA=PA*15/100;
       TA = PA-DA;
       printf("purchase amount: %d\n",PA);
       printf("discount amount: %d\n",DA);
       printf("total amount: %d\n",TA);
   }
    return 0;
}