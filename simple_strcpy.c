#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 50
void main()
{
  char *source = "tamil";       //source string
  char *destination;            //destination strin  
  destination=malloc(MAX_LEN * sizeof(char));
  int index=0,*add;
  
  while(source[index]!='\0')
  { 
	add=&source[index];
	destination[index]=*add;
	index++;
       
  }

   // destination[index]='\0';
    printf("%s\n",destination);
    
}
  

  
