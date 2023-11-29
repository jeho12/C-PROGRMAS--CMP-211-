// program to check if number are in the range of 10,50,100

#include<stdio.h>
int main()
{
	int number;
	printf("Enter number to check: ");
	scanf("%d", &number);
	
	switch(number){
		case10:
		// if number ==10
		printf("Number entered is 10");
		break;
	case 50:
		// else if (number==50)
		printf("Number entered is 50");
		break;
	case 100:
		// else if (number==100)
		printf("Number entered is 100");
		break;
	default:
		//else
		printf("Number entered is neither 10 , 50 , 100");
	}
	
	return 0;
}
