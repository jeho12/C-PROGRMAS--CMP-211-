// program to print given number using WHILE loop
#include<stdio.h>
int main()
{
	int i=1, number, mult;
	printf("Enter a number of ur choice:");
	scanf("%d",&number);
	
	while(i<=10)
	{
		mult=number*i;
		printf("%d * %d\n", number,i,mult);
		i++;
	}
	printf("End of Multiplicatin Table!!!!!");
	return 0;
}
