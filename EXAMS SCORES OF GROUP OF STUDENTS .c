// input the exam scores of students in cmp 211 class

#include<stdio.h>
int main ()
{
	int n_o_s, score;
	int total_score=0;
	int i=1; //
	int avg_score;
	
	printf("Enter the number of students in CMP 211 class: ");
	scanf("%d", &n_o_s);
	
	while(i<n_o_s)
	{
		printf("Enter Score for student %d : ", i);
		scanf("%d", &score);
		total_score+=score;
		i++;
	}
	
	printf("The total exam score for CMP211 students is %d\n", total_score);
	avg_score = total_score/n_o_s;
	printf("The average exam score for CMP 211 students is %d", avg_score);
	
	return 0;
}
