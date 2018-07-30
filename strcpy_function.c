#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
	char source[10];
	char *destination;
}string_copy;



void copy_str(string_copy *ref)
{
	printf("%s",ref->source);
	int index,i;
	index=strlen(ref->source);
	ref->destination=malloc(index+1);
	printf("%d",index);
	for(i=0;i<=index;i++)
	{
		ref->destination[i]=ref->source[i];
		
	}
	ref->destination[i]='\0';
}



int main()
{
	string_copy * copy;
	copy = malloc(sizeof (string_copy));
	printf("enter the name");
	scanf("%s",copy->source);
	copy_str(copy);	
	printf("%s",copy->destination);

	return 0;
}