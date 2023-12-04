#include <stdio.h>
int main(){
	
	//Program that can be determining the type of triangle.
	
	float side1, side2,side3;
	
	printf("Enter the first side: ");
	scanf("%f", &side1);

	printf("Enter the second side: ");
	scanf("%f", &side2);
	
	printf("Enter the third side: ");
	scanf("%f", &side3);
	
	if(side3 == side2 == side1){
		printf("This is an epuilateral triangle. ");
	}else if (side1 != side2 && side1 != side3 && side2 != side3){
		
		printf("This is an unequal triangle. ");
		
	}else{
		
		printf("This is an isosceles triangle. ");
		
	}
	
    return 0;
}
