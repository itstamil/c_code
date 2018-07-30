#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_VALUE 2
typedef struct 
{
	int student_id;
	char name[20];
	float percentage;
}student;


void main()
{
	student * value=malloc(MAX_VALUE * sizeof (student));
	//printf("%d",value);
	printf("enter details\n");
	for (int i = 0; i < MAX_VALUE; i++)
	{   
		printf("Enter the id\t");
		scanf("%d",&value[i].student_id);
		printf("Enter the name\t");
		scanf("%s",value[i].name);
		printf("Enter the percentage\t");
		scanf("%f",&value[i].percentage);
	}

	for (int i = 0; i < MAX_VALUE; i++)
	{
		printf("student_id is :%d\n",(value+i)->student_id);
		printf("student_name is :%s\n",(value+i)->name);
		printf("student_percentage :%f\n",(value+i)->percentage );
	}
}
