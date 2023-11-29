// program to print given number using WHILE loop
#include<stdio.h>
int main()
{
	int i=1, number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	while(i<=10)
	{
		printf("%d * %d\n", number,i,(number*i));
		i++;
	}
	return o;
}
