#include <stdio.h>
int main(){

char myoperator;
float number1, number2;

printf("Choose an operator(+,-,*,/):");
scanf("%c", &myoperator);

printf("Enter two numbers: ");
scanf("%f%f",&number1, &number2);

printf("\noperator=%c\nnumber1=%f\nnumber2=%f\n", myoperator,number1,number2);

switch(myoperator){
	
	case '/': printf("%f", number1/number2);break;
	case '*': printf("%f", number1*number2);break;
	case '+': printf("%f", number1+number2);break;
	case '-': printf("%f", number1-number2);break;
	default: printf("You entered the wrong operator\n\n");
	
}


	
return 0;	
}


