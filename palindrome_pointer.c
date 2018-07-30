#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 20
#define TRUE 0
#define FALSE 1
#define ERROR -1
int palindrome_check(char *recv_string){
	unsigned char length,s_index=0,f_index,count=0;
	length=strlen(recv_string);
	printf("%d\n",length );
	if(length==1){
		return ERROR;
	}
	else{
	f_index=length-1;
	while(s_index<f_index){

		if(recv_string[s_index] == recv_string[f_index]){
			count+=2;			
		}
		s_index++;
		f_index--;
	}
	if(length%2==0)
	{
		if(length==count){
			return TRUE;
		}
		else{
			return FALSE;
		}
		
	}
	else{
		count+=1;
		if(length == count){
			return TRUE;
		}
		else{
			return FALSE;
		}
				
	}
}
	
}
int main(){
	char *check_string;
	int return_value;
	check_string=(char *) malloc(MAX_LEN * sizeof(char));
	printf("enter the input string to check the palindrome or not");
	scanf("%s",check_string);
	return_value=palindrome_check(check_string);
	if(return_value==0){
		printf("palindrome");
	}
	else if(return_value==1){
		printf("not_palindrome");
	}
	else{
		printf("Check the input");
	}
	free(check_string);
	return 0;
}