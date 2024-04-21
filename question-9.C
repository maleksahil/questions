#include<stdio.h>

int main()
{
int p;
float r;
int t;
int d=100;
int interest;

printf("enter the principal amount: ");
scanf("%d",&p);

printf("enter the rate of interest: ");
scanf("%f",&r);

printf("enter the time period: ");
scanf("%d",&t);

interest = p*r*t/100;

printf("%d\n",interest);

if(interest<0){
     printf("Error: Negative interest calculated. Please check your inputs.\n");
}

}