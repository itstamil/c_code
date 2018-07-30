#include<stdio.h>  			//header declaration

int main(){
	char character;
	printf("enter the character to check : ");
	// Getting input from user
	scanf("%c",&character);
	printf("the character entered to check is :%c\n", character);
	if(character=='A' || character=='E' || character=='I' || character=='O' || character=='U'){
		printf("the given character is vowel :%c",character);
	}
	else if(character== 'a' || character== 'e' || character== 'i' || character== 'o' || character== 'u'){

		printf("The character %c is vowel .",character);
	}
	else{

		printf("The character %c is not vowel .",character);
	
	}
	return 0;
}
