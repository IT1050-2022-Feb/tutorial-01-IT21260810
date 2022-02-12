#include<stdio.h>
float findCA_1 (int t_marks1);
float findCA_2 (int t_marks2);
int main ()

{
	int mrk1,mrk2,ass1[5],ass2[5],i,j;
	
	
	for(i=0;i<2;i++)
	{
	
	
	printf ("Enter the marks of first assignment : ");
	scanf("%d",&ass1[i]);
	
	printf ("Enter the marks of second assignment : ");
	scanf("%d",&ass2[i]);
	
	
}
printf("\nStudent\t Mark1\tMark2\tCA_1\tCA_2");
   
    for(j=0;j<2;j++)
    {
	printf("\n   %d\t  %d\t  %d\t%.2f\t%.2f",j+1,ass1[j],ass2[j],findCA_1 (ass1[j]),findCA_2 (ass2[j]));

   }
	return 0;
}

float findCA_1 (int t_marks1)
{
	float mrk;
	
	mrk=t_marks1*0.2;
	
	return mrk;
}
float findCA_2 (int t_marks2)
{
	float mrk;
	
	mrk=t_marks2*0.3;
	
	return mrk;
}