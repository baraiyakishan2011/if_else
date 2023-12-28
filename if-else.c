#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	if(a<b){
		printf("value of A is minimum");
	}
	else{
		printf("Value of B is maximum");
	}
	
	int c;
	
	printf("\n\nEnter value of C = ");
	scanf("%d",&c);
	
	if(c<0){
		printf("Value of C is negative");
	}
	else if(c==0){
		printf("Value of C is neutral");
	}
	else if(c>0){
		printf("Value of C is positive");
	}
}