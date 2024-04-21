#include<stdio.h>
main(){
	int degree;
	printf("enter your degree: ");
	scanf("%d",&degree);
	if(degree<=90 && degree>=0){
		printf("First quadrant");
	}else if(degree>=90 && degree<=180){
		printf("second quadrant");
	}else if(degree>=180 && degree<=270){
		printf("Third quadrant");
	}else if(degree>=270 && degree<=360){
		printf("fourth quadrant");
	}else {
		printf("grade F");
	}
}