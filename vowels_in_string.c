#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20
int main(){

	char *string;
	unsigned char a=0,e=0,i=0,o=0,u=0,length,index;
	string=malloc(MAX_LEN * sizeof(char));
	printf("Enter the string");
	scanf("%s",string);
	length=strlen(string);
	for(index=0;index<length;index++)
    {
           if(string[index]=='a'|| string[index]=='A')
           {
        	     a++;
           }
           else if(string[index]=='e'|| string[index]=='E')
          {
        	     e++;
          }
           else if(string[index]=='i'|| string[index]=='I')
          {
        	     i++;
          }
          else if(string[index]=='o'|| string[index]=='O')
          {
        	     o++;
          }
          else if(string[index]=='u'|| string[index]=='U')
          {
        	     u++;
          }
    }

    printf("vowel a is %d times\n" ,a);

    printf("vowel e is %d times\n",e);
   
    printf("vowel i is %d times\n",i);
    
    printf("vowel o is %d times\n",o);

    printf("vowel u is %d times\n",u);

	return 0;
}






    
