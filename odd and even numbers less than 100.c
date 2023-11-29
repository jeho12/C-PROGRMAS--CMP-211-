// program to check if a number is less than 100
// if it is, check if it is an evn or odd number


#include<stdio.h>
int main()
{
	int num;
	
	printf("ENter a Number to check: ");
	scanf("%d", &num);
	if(num<=100)
	{
		printf("%d is less than 100\n", num);
		if (num%2==0)
		{
			printf("%d is an even number!!!", num);
		}
		else
		printf("%d is an odd number!!!", num);
	}
	else
	printf("%d is greater than 100", num);
	
	return 0;
	
}
