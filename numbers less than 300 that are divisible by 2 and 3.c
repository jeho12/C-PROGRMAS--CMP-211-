// program to check if a number is less than 300
// if it is, check if it is an evn or odd number


#include<stdio.h>
int main()
{
	int num;
	
	printf("ENter a Number to check: ");
	scanf("%d", &num);
	if(num<=300)
	{
		printf("%d is less than or equal to 300\n", num);
		if (num%2==0)
		{
			printf("%d is divisible by 2!!!\n", num);
			if(num%3==0)
			{
			printf("%d is divisible by 3!!!\n", num);	
			}
			else
			printf("%d is not divisible by 3!!!\n", num);
		}
		else
		printf("%d is not divisible by 2!!!\n", num);
	}
	else
	printf("%d is greater than 300", num);
	
	return 0;
	
}
