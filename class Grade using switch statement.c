// program to check if number are in the range of 10,50,100

#include<stdio.h>
int main()
{
	int MTH211, GST211, CMP211;
	int total;
	int average;
	
	printf("Enter your GST 211 score: ");
	scanf("%d", &GST211);
	printf("Enter your CMP 211 score: ");
	scanf("%d", &CMP211);
	printf("Enter your MTH 211 score: ");
	scanf("%d", &MTH211);
	
	
	total=GST211+MTH211+CMP211;
	average = total/3;
	printf("Total score is %d\n", total);
	printf("Average score is %d\n", average);

	// A=70-100, B=60-69, C=50-59; D=45-49; F=0 ot 44
	
	switch(average)
	{
		case 70 ... 100:
		printf("YOUR Grade is A");
		break;
	case 60 ... 69:
		printf("Your Grade is B");
		break;
	case 50 ... 59:
		printf("Your Grade is C");
		break;
	case 45 ... 49:
		printf("Your Grade is D");
		break;
	case 0 ... 44:
		printf("Your Grade is E");
		break;	
	default:
		//else 
		printf("Number entered is neither 10 , 50 , 100");
	}
	
	return 0;
}
