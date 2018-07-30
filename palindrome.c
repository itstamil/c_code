#include <stdio.h>

int main(){
	int initial,final,reverse=0,reminder;
	printf("_____PALINDROME OR NOT_________\n");
	printf("enter the number :");
	scanf("%d",&initial);
	final = initial; 			//assigning the num to second integer 
	while(final!=0){
		reminder=final%10;
		reverse=reverse*10+reminder;
		final=final/10;
	}
	printf("the reversed number of initial is %d\n",reverse);
	if(initial == reverse){
		printf("____THE GIVEN NUM IS PALINDROME___\n");
	}
	else{
		printf("____THE GIVEN NUM IS NOT PALINDROME___\n");
	}
	return 0;
}