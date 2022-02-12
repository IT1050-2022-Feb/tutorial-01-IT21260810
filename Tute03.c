#include<stdio.h>
float area(float length, float width);
float Harea(float Hlength, float Hwidth);
int main()
{
	float width,length,Hwidth,Hlength,House=0,Yard=0,Lawn=0;
	
	printf("\nEnter the length of the yard : ");
	scanf("%f",&length);
	
	printf("\nEnter the width of the yard : ");
	scanf("%f",&width);
	
		
	printf("\nEnter the width of the house : ");
	scanf("%f",&Hwidth);
	
		
	printf("\nEnter the length of the house : ");
	scanf("%f",&Hlength);

	
	
	printf("\nArea of the Yard : %.2f",area(length,width)); 
	printf("\nArea of the House : %.2f",area(Hlength,Hwidth)); 
	printf("\nArea of the Lawn : %.2f",area(length,width)-area(Hlength,Hwidth)); 
}

float area(float length, float width)
{
	float area;
	area = length*width;
	return area;
}
