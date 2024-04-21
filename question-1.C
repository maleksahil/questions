#include<stdio.h>
main(){
	int mark;
	printf("enter your marks: ");
	scanf("%d",&mark);
	if(mark>=90){
		printf("grade A");
	}else if(mark>=80 && mark<=89){
		printf("grade B");
	}else if(mark>=70 && mark<=79){
		printf("grade C");
	}else if(mark>=60 && mark<=69){
		printf("grade C");
	}else {
		printf("grade F");
	}
}