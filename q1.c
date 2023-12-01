#include<stdio.h>
main(){
	int a,b,c,d,e;
	
	printf("Enter 1st number:");
	scanf("%d",&a);
	
	printf("Enter 2nd number:");
	scanf("%d",&b);
	
	printf("Enter 3rd number:");
	scanf("%d",&c);
	
	printf("Enter 4th number:");
	scanf("%d",&d);
	
	printf("Enter 5th number:");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is max\n"):printf("e is max\n")
					 :(d>e)?printf("d is max\n"):printf("e is max\n")
			   :(c>d)?(c>e)?printf("c is max\n"):printf("e is max\n")
			   		 :(d>e)?printf("d is max\n"):printf("e is max\n")
	   	 :(b>c)?(b>d)?(b>e)?printf("b is max\n"):printf("e is max\n")
					 :(d>e)?printf("d is max\n"):printf("e is max\n")
			   :(c>d)?(c>e)?printf("c is max\n"):printf("e is max\n")
			   		 :(d>e)?printf("d is max\n"):printf("e is max\n");
}
