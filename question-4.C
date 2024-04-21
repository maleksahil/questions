#include<stdio.h>
main(){
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("you are eligable to vote");
	}else {
		printf("you are not eligable to vote");
	}
}